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
#include <regex>
#include <fstream>

// colors and indentation for terminal outputs
#define terminal_error "\x1b[31m\t" // errors are red with an indentation
#define terminal_feedback "\x1b[0m" // regular terminal outputs
#define terminal_success "\x1b[32m" // awesome stuff that happened, benchmark passes or sumn

int main(int argc, char* argv[]) 
{
    //////
    // FILE DETECTION
    //////
    std::cout << terminal_success << "running: " << argv[0] << terminal_feedback << std::endl;
    std::cout << std::endl;

    // argc is always at least one, as the name of the executable file is the first argument
    if(!(argc-1)) 
    {
        // .pap for paper
        std::cerr << terminal_error << "No file selected.\n\tUsage: " << argv[0] << " <name_of_file>.pap" << terminal_feedback << std::endl;
        return -1;
    }

    // note: c regex's need escaped backslashes (as the backslash is the escape-character in both c-strings AND regexes)
    std::regex paperRegex("\\w+\\.pap");
    if(!std::regex_match(argv[1],paperRegex))
    {
        // .pap for paper
        std::cerr << terminal_error << "Not a paper.\n\tUsage: " << argv[0] << " <name_of_file>.pap" << terminal_feedback << std::endl;
        return -1;
    }

    std::cout << "Processing document \"" << argv[1] << "\"" << std::endl;
    //////
    // FILE DETECTION END
    //////

    /**
     * Larger To Do: Process the pap into pdf, while maintaining pap syntax?
     */

    //////
    // PRODUCE OUTPUT PDF
    //////

    // getting the file name right
    std::string fileName = argv[1];
    fileName.erase(fileName.end()-4,fileName.end()); // gets rid of the last four characters of a string
    std::string fileExtension = ".pdf";
    std::string pdfName = fileName + fileExtension;
    
    // instanciating an output
    std::ofstream output (pdfName);
    
    // to do: output-ing a pdf
    // /&/ note: this is a minimal pdf-file
    output << "%PDF-1.0\n1 0 obj<</Type/Catalog/Pages 2 0 R>>endobj 2 0 obj<</Type/Pages/Kids[3 0 R]/Count 1>>endobj 3 0 obj<</Type/Page/MediaBox[0 0 3 3]>>endobj\nxref0 4 0000000000 65535 f\n0000000010 00000 n\n0000000053 00000 n\n0000000102 00000 n\ntrailer<</Size 4/Root 1 0 R>>\nstartxref\n149\n%EOF";
    // /^/ above: is a minimal pdf-file

    //////
    // PRODUCE OUTPUT PDF END
    //////
    return 0;
}