/**
 * Tool for pdf creation.
 * Intended use: Scientific papers, reports, documentation and thesis writing.
 * 
 * ToDo:
 * - Everything
 * - Documentation on GitHub for now
 * For now:
 * - create a .pdf from a .pap
 * - how should a .pap be structured?
 * - what features would be cool/useful? e.g., plots, graphics, table of contents, references/bib-management
 */
#include <iostream>
#include <string>
#include <fstream>

// colors and indentation for terminal outputs
#define terminal_error "\x1b[31m\t" // errors are red with an indentation
#define terminal_feedback "\x1b[0m" // regular terminal outputs
#define terminal_success "\x1b[32m" // awesome stuff that happened, benchmark passes or sumn

int main(int argc, char* argv[]) 
{
    std::cout << "running: " << argv[0] << std::endl;
    std::cout << std::endl;

    // argc is always at least one, as the name of the executable file is the first argument
    if(!(argc-1)) 
    {
        // .pap for paper
        std::cerr << "No file selected.\n\tUsage: " << argv[0] << " <name_of_file>.pap" << std::endl;
        return -1;
    }

    std::cout << "Processing document \"" << argv[1] << "\"" << std::endl;

    
    return 0;
}