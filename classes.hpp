#ifndef __CLASSES_HPP__
#define __CLASSES_HPP__

#include <iostream>

class Maths {
private:
   unsigned int fMax;

public:
   Maths(unsigned int max);
   Maths();

   unsigned int GetMax() const;
   void SetMax(unsigned int max);
   unsigned long Sum();
};

#endif
