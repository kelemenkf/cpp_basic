#include <iostream>
using namespace std;

#include "sum.hpp"

int main()
{
  
  double d1, d2;
  cout << "Enter the first summand: " << endl;
  cin >> d1;
  cout << "Enter the second summand: " << endl;
  cin >> d2;

  cout << "The sum is: " << sumTwoNumbers(d1, d2) << endl;

  
  double d3, d4, d5;
  cout << "Enter the first summand: " << endl;
  cin >> d3;
  cout << "Enter the second summand: " << endl;
  cin >> d4;
  cout << "Enter the third summand: " << endl;
  cin >> d5;

  cout << "The sum is: " << sumThreeNumbers(d3, d4, d5) << endl;

  return 0;
}

