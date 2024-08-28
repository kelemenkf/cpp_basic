#ifndef SUM_GENERIC_HPP
#define SUM_GENERIC_HPP

template <class Numeric>
Numeric sumTwoNumbersGeneric(const Numeric& a, const Numeric& b) {
  Numeric sum; 
  sum = a + b;
  return sum;
}

template <class Numeric>
Numeric sumThreeNumbersGeneric(const Numeric& a, const Numeric& b, const Numeric& c) {
  Numeric sum;
  sum = a + b + c;
  return sum;
}

#endif
