/* -----------------------------------------------------------------------------
Circle.hpp

Contains the circle class
    -> To compute areas, perimeters of circles
----------------------------------------------------------------------------- */
#ifndef CIRCLE_HPP_INCLUDED
#define CIRCLE_HPP_INCLUDED

class Circle
{

  public:

    /* Constructors */
    Circle(void) ;
    Circle(double rad);

    /* Public functions */
    void init(double rad);

    double get_diameter(void);
    double get_area(void);

  private:

    /* Private parameters */
    double radius, diameter;
    const double PI = 3.141;
};


#endif // CIRCLE_HPP_INCLUDED
