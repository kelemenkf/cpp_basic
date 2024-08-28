#include <iostream>
#include "basic_financial.hpp"
using namespace std;
using namespace BasicFinancial;


int main()
{
  
  double rate;
  int m;
  cout << "Enter discrete rate: " << endl;
  cin >> rate;
  cout << "Enter number of periods: " << endl;
  cin >> m;
  cout << "Converted to continuous, the rate is: " << ConvertToContinuous(rate, m) << endl;

  double rate2;
  int m2;
  cout << "Enter continuous rate: " << endl;
  cin >> rate2;
  cout << "Enter number of periods: " << endl;
  cin >> m2;
  cout << "Converted to discrete, the rate is: " << ConvertFromContinuous(rate2, m2) << endl;

  return 0;

}


