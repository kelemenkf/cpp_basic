#include "basic_financial.hpp"
#include <cmath>

namespace BasicFinancial
{

  double ConvertFromContinuous(double rate, int m)
  {
  
    return m * (exp(rate/m) - 1);

  }

  
  double ConvertToContinuous(double rate, int m)
  {

    return m * log(1 + (rate / m));

  }

}
