#include "point.hpp"
#include <iostream>
using namespace std;

int main()
{

  Point p1(1.0, 3.14);
  Point p2(p1);
  Point p3;

  cout << p1.X() << " " << p1.Y() << endl;
  cout << p2.X() << " " << p2.Y() << endl;
  cout << p3.X() << " " << p3.Y() << endl;

  return 0;

}
