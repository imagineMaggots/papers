/**
 * Logical starting point: 
 * - Fully constructed DOM
 * - Needs to be processed into a pdf now.
 */
#include "pdf.h"
#include <string>
#include <fstream>

// to do: pdf-header

/**
 * @brief print some whitespace into the output-pdf
 */
void printWhitespace(char decider, std::ofstream pdf)
{
    // Note: you could convert the string characters into alphanum-values
    switch (decider)
    {
        // NUL character
        case '\0':
            pdf << "";
            break;
        // Horizontal Tab
        case '\t':
            break; 
        // Line Feed or New Line
        case '\n':
            break;
        // Return carriage (return to line-begin)
        case '\r':
            break;
        // Form feed or New Page
        case '\f':
            break;
        // Space
        case ' ':
            break;
        default:
            break;
    }
}

// to do: pdf-trailer