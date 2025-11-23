/** 
 * Holds all paper objects (logically, not literally)
 */
#include "pap.h"

class page
{
    private:
        int height;
        int width;
    public:
        // constructor
        page(int height, int width)
        {
            this->height=height;
            this->width=width;
        }
        // destructor
        ~page();
};

class section: public page
{
    public:
        int height;
        int width;
        section();
};