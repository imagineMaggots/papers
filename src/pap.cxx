/** 
 * Holds all paper objects (logically, not literally)
 */
#include <string>
#include "pap.h"

enum type {
    text,
    image,
    plot,
    diagram,
    equation
};

/**
 * @brief boring class representing a document
 */
class document
{
    public:
        int height; // height in pixels
        int width; // width in pixels
        void setHeight(int height)
        {
            this->height=height;
        }
        void setWidth(int width)
        {
            this->width=width;
        }
        int getHeight()
        {
            return this->height;
        }
        int getWidth()
        {
            return this->width;
        }
};

/**
 * @brief boring class representing a page
 */
class page: public document
{
    public:
        int pageNumber;
        void setPageNumber(int prevPageNum)
        {
            this->pageNumber=prevPageNum+1; // the new page number is the last page number plus one (obv)
        }
        int getPageNumber()
        {
            return this->pageNumber;
        }
};

/**
 * @brief first interesting class, representing an editable part of a page of a document
 * sorry if this is confusing
 * 
 */
class cell: public page
{
    public:
        int position;// 1-9, following the numpad
        void setPosition(int position)
        {
            this->position=position;
        }
        int getPosition()
        {
            return this->position;
        }
        void create(std::string input, enum type typesetAs)
        {
            switch (typesetAs)
            {
            case text:
                /* code */
                break;
            case text:
                /* code */
                break;
            
            default:
                break;
            }
        }
};