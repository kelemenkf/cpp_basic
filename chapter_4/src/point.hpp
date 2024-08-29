#ifndef POINT_HPP
#define POINT_HPP


class Point
{

private:

  void init(double xs, double xy);

  double x;
  double y;


public: 

  Point();
  Point(double xs, double ys);
  Point(const Point& source);
  virtual ~Point();

  double X() const;
  double Y() const;

};

#endif
