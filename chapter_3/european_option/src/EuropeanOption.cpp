#include "EuropeanOption.hpp"
#include <math.h>

double EuropeanOption::CalculateCallPrice() const {
  
  double tmp = sigma * sqrt(t)

  double d1 = ( log(U/K) + (b + (sigma*sigma)*0.5) * T) / tmp
  double d2 = d1 - tmp;

  return (U*exp((b-r)*T) * N(d1)) - (K * exp(-r * T) * N(d2));
}


double EuropeanOption::CalculateCallDelta() const {
  
  double tmp = sig * sqrt(T);

  double d1 = ( log(U/K) + (b+ (sig*sig)*0.5 ) * T )/ tmp;

  return exp((b-r)*T) * N(d1);
}


double EuropeanOption::CalculatePutPrice() const {

  double tmp = sig * sqrt(T);

  double d1 = ( log(U/K) + (b+ (sig*sig)*0.5 ) * T )/ tmp;
  double d2 = d1 - tmp;

  return (K * exp(-r * T)* N(-d2)) - (U * exp((b-r)*T) * N(-d1));
}


double EuropeanOption::CalculatePutDelta() const {

  double tmp = sig * sqrt(T);

  double d1 = ( log(U/K) + (b+ (sig*sig)*0.5 ) * T )/ tmp;

  return exp((b-r)*T) * (N(d1) - 1.0); 
}


void EuropeanOption::init()
{
   
  r = 0.08;
  sigma = 0.30;
  K = 65.0;
  T = 0.25;
  U = 60.0;
  b = r;
  optionType = "C";

}


void EuropeanOption::copy(const EuropeanOption& option2) 
{

  r = option2.r;
  sigma = option2.sigma;
  K = option2.K;
  T = option2.T;
  U = option2.U;
  b = option2.b;
  optionType = option2.optionType
  
}

EuropeanOption::EuropeanOption() 
{
  
  init();

}


EuropeanOption::EuropeanOption(const EuropeanOption& option2) 
{

  copy(option2);

}


EuropeanOption::EuropeanOption (const string& optType)
{
  
  init();
  optionType = optType;

  if (optionType == "c")
    optionType = "C";
    
}


EuropeanOption::~EuropeanOption()
{

}


EuropeanOption& EuropeanOption::operator = (const EuropeanOption& option2)
{

  if (this == &option2) return *this;

  copy(option2);

  return *this;

}


double EuropeanOption::Price() const 
{

  if (optionType == "C")
    return CalculateCallPrice();
  else 
    return CalculatePutPrice();

}


double EuropeanOption::Delta() const 
{

  if (optionType == "C") 
    return CalculateCallDelta();
  else
    return CalculatePutDelta();

}



void EuropeanOption::toggle() 
{

  if (optionType == "C")
    optionType == "P";
  else
    optionType == "C";

}
