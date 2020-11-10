/* -----------------------------------------------------------------------------
Project : Tutorial_cpp
Author : SP
Date : 10/11/20

Aim of the project : Test git functions and C++
----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Global includes
----------------------------------------------------------------------------- */
#include <iostream>

/* -----------------------------------------------------------------------------
Local includes
----------------------------------------------------------------------------- */
#include "Geometry.hpp"
#include "Circle.hpp"

/* -----------------------------------------------------------------------------
Local defines
----------------------------------------------------------------------------- */
using namespace std;

/* -----------------------------------------------------------------------------
Main function
----------------------------------------------------------------------------- */
int main()
{
    /* Create rectangle class */
    Rectangle Geometry_rect;

    /* Get area */
    cout << "Rectangle area at initialization : " << Geometry_rect.area() << endl;

    /* Initialize the rectangle */
    Geometry_rect.init(10, 15);

    /* Check again the area */
    cout << "Rectangle area after init : " << Geometry_rect.area() << endl;

    /* Create circle */
    Circle Circle(1.00);

    /* Get area */
    cout.precision(3);
    cout << "Circle area at initialization : " << fixed << Circle.get_area() << endl;
    cout << "Circle diameter : " << fixed << Circle.get_diameter() << endl;
	
	/* The end */
	cout << "This is the end " << endl ;

    return 0;
}
