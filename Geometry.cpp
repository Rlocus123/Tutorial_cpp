/* -----------------------------------------------------------------------------
Geometry.cpp

Contains the functions for Geometry.hpp
    -> Square and rectangles functions
----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Global includes
----------------------------------------------------------------------------- */
#include <iostream>

/* -----------------------------------------------------------------------------
Local includes
----------------------------------------------------------------------------- */
#include "Geometry.hpp"

/* -----------------------------------------------------------------------------
Local defines
----------------------------------------------------------------------------- */
using namespace std;

/* -----------------------------------------------------------------------------
Constructor (s)
----------------------------------------------------------------------------- */
Rectangle::Rectangle(void)
{
    width = 0 ;
    height = 0;
}

Rectangle::Rectangle(int w, int h)
{
    if(w >= 0 && h >= 0)
    {
        width = w ;
        height = h;
    }
}

/* -----------------------------------------------------------------------------
Initialize private variables
----------------------------------------------------------------------------- */
void Rectangle::init(int w, int h)
{
    if(w >= 0 && h >= 0)
    {
        width = w ;
        height = h;
    }
}

/* -----------------------------------------------------------------------------
Compute area
----------------------------------------------------------------------------- */
int Rectangle::area(void)
{
    return width * height;
}

