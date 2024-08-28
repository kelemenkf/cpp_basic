#ifndef GENERIC_SUM_CPP
#define GENERIC_SUM_CPP

#include "sum_generic.hpp"

template <class Numeric>
  Numeric sumTwoNumbersGeneric(const Numeric& a, const Numeric& b) {
    Numeric sum; 
    sum = a + b;
    return sum;
  }


template <class Numeric>
  Numeric sumTwoNumbersGeneric(const Numeric& a, const Numeric& b, const Numeric& c) {
    Numeric sum;
    sum = a + b + c;
    return sum;
  }

#endif 
