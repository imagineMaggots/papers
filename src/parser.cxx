/**
 * File parser for .pap-syntax evaluation.
 * 
 * For now: simple structural print to cmd.
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <regex>
#include <cstdlib>


// colors and indentation for terminal outputs
#define terminal_error "\x1b[31m\t" // errors are red with an indentation
#define terminal_error_ext "\x1b[35m\t" // magenta for: "it's not the compilers fault"
#define terminal_feedback "\x1b[0m" // regular terminal outputs
#define terminal_success "\x1b[32m" // awesome stuff that happened, benchmark passes or sumn

std::vector<std::string> looseTexts;// loose texts, which are not bound by any commands and can be placed potentially anywhere
std::vector<std::string> usedCommands;
/**
struct cell{
    std::vector<std::string> cellContents;
    // 3-dimensional vector holding the current position inside a cell.
    std::vector<std::vector<std::vector<int>>> cellPosition;
};

// for later evaluation
std::vector<cell> positioning;
 */


// regexes
std::regex command("#\\w+");// any instance of #characters will be interpreted as a command.


// how the command will be interpreted
enum interpretation {
    global,// will be added with multi-file management
    local,// scope: document-wide effects
    single,// scope: affecting single pages only
    cellular,// scope: affecting partitions of a page
    sub,// for later cell-manipulation
};

int main(int argc, char** argv)
{
    std::cout << "Hello from parser module" << std::endl;
    //globalSettings();// retrieves any global settings for the given document

    std::ifstream input("test.pap");

    // single line evalutation for now. can be optimized using iterators
    int x = 0;
    std::string line;
    while(std::getline(input,line))// implies a "until we see EOF"
    {
        // texts need to be handled last, as any "non-text" is more important (as these are guidelines for the texts)
        // can be done quicker. unnecessary check (but it helped me logically rn)
        if(!std::regex_search(line,command))// regex match returns true if the entire line matches. we only need true if a part matches. we're searching
        {
            std::cout << terminal_error_ext << "no command in line " << ++x << terminal_feedback << std::endl;
        }
        // we're not not dealing with a command
        else{
            // in-line detection
            std::vector<std::string> commandToken
            {
                std::sregex_token_iterator{line.begin(), line.end(), command, 0},
                std::sregex_token_iterator{}
            };
            // append all caught commands for later
            usedCommands.insert(usedCommands.end(), commandToken.begin(), commandToken.end());
            
            // get rid of all commands
            std::string trimmed = std::regex_replace(line, command, "");

            looseTexts.push_back(line);

            std::cout << terminal_success << "command found in line " << ++x << terminal_feedback << std::endl;
        };
    }

    // next step: command validation
    // next step: determine what cell-positionings and contents were pre-defined (!)
    // - start with simple text positioning

    input.close();
    return 0;    
}