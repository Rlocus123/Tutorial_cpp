/* -----------------------------------------------------------------------------
Geometry.hpp

Contains the Geometry class
    -> To compute areas, perimeters of any type of geometrical form
----------------------------------------------------------------------------- */
#ifndef GEOMETRY_HPP_INCLUDED
#define GEOMETRY_HPP_INCLUDED

class Rectangle
{

  public:

    /* Constructors */
    Rectangle(void) ;
    Rectangle(int w, int h);

    /* Public functions */
    void init(int w, int h);
    int area(void);

  private:

    /* Private parameters */
    int width, height;
};

#endif // GEOMETRY_HPP_INCLUDED
