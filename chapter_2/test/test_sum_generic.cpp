#include <iostream> 
using namespace std;

#include "sum_generic.hpp"

int main()
{
  
  int i1, i2;
  cout << "Enter the first summand: " << endl;
  cin >> i1;
  cout << "Enter the second summand: " << endl;
  cin >> i2;

  cout << "The sum is: " << sumTwoNumbersGeneric(i1, i2) << endl;

  
  long l3, l4, l5;
  cout << "Enter the first summand: " << endl;
  cin >> l3;
  cout << "Enter the second summand: " << endl;
  cin >> l4;
  cout << "Enter the third summand: " << endl;
  cin >> l5;

  cout << "The sum is: " << sumThreeNumbersGeneric(l3, l4, l5) << endl;

  return 0;
}


