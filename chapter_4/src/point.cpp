#include "point.hpp"
 
void Point::init(double xs, double ys)
{  
  x = xs;
  y = ys;
}

Point::Point()
{
  init(0.0, 0.0);
}


Point::Point(double xs, double ys)
{
  init(xs, ys);
}

Point::Point(const Point& source)
{
  init(source.x, source.y);
}


Point::~Point()
{
}


double Point::X() const 
{
  return x;
}


double Point::Y() const 
{
  return y;
}

