/**
 * File parser for .pap-syntax evaluation.
 * 
 * For now: simple structural print to cmd.
 * 
 * left-over to do's
 *  - clean up code
 *  - make documentation more readable
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

enum positionCommands {
    top,
    top_left,
    top_right,
    center,
    center_left,
    center_right,
    bottom,
    bottom_left,
    bottom_right,
};

// in-document sector. a part of a page of the document
class sector {
    public:
        void setPosition(int page, int row, int column) 
        {
            this->position[0]=page;
            this->position[1]=row;
            this->position[2]=column;
        };
        // returns page number, row and column in page (following thirds in pages)
        int* getPosition()
        {
            return this->position;
        };
    private:
        int* position;// array for position. first array is for page number, second for x and last for y position.
    sector(positionCommands pos, int page)
    {
        switch (pos)
        {
            case top:
                setPosition(page, 0, 1);
                break;
            
            default:
                break;
        }
    }
};

int main(int argc, char** argv)
{
    std::cout << "Hello from parser module" << std::endl;
    //globalSettings();// retrieves any global settings for the given document

    std::ifstream input("test.pap");

    //////
    // FETCHING COMMANDS
    //////

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
    //////
    // FETCHING COMMANDS END
    //////

    
    //////
    // SYNTAX VALIDATION
    //////
    for(std::string command : usedCommands)
    {
        if(command==)
    }


    //////
    // SYNTAX VALIDATION END
    //////

    // next step: determine what cell-positionings and contents were pre-defined (!)
    // - start with simple text positioning

    input.close();
    return 0;    
}