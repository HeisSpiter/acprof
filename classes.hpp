#ifndef __CLASSES_HPP__
#define __CLASSES_HPP__

#include "functions.hpp"
#include <iostream>

class Maths {
private:
   unsigned int fMax;

public:
   Maths(unsigned int max);
   Maths();

   unsigned int GetMax() const;
   void SetMax(unsigned int max);
   unsigned long GetSum() const;
   unsigned long GetFrequencyOfPrimes() const;
};

#endif
