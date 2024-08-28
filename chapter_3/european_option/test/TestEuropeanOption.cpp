#include "EuropeanOption.hpp"
#include <iostream>
using namespace std;

int main()
{
  EuropeanOption callOption;
  cout << "Call option on a stock: " << callOption.Price() << endl;

  EuropeanOption indexOption;
  indexOption.optionType = "P";
  indexOption.U = 100.0;
  indexOption.K = 95.0;
  indexOption.T = 0.5;
  indexOption.r = 0.10;
  indexOption.sigma = 0.20;
  double q = 0.05;
  indexOption.b = indexOption.r - q;


  cout << "Put option on index: " << indexOption.Price() << endl;

  EuropeanOption futureOption;
  futureOption.optionType = "P";
  futureOption.U = 19.0;
  futureOption.K = 19.0;
  futureOption.T = 0.75;
  futureOption.r = 0.10;
  futureOption.sigma = 0.28;
  futureOption.b = 0.0;

  cout << "Put option on future: " << futureOption.Price() << endl;

  futureOption.toggle();
  cout << "Call on future: " << futureOption.Price() << endl;
 
  return 0; 
}
