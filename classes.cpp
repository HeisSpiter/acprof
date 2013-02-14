#include "classes.hpp"

Maths::Maths(unsigned int max) {
   SetMax(max);
}

Maths::Maths() {
   SetMax(0);
}

void Maths::SetMax(unsigned int max) {
   if (max < 2) {
      std::cout << "Forcing to 2" << std::endl;
      max = 2;
   }

   fMax = max;
}

unsigned long Maths::Sum() {
   unsigned long total = 0;
   for (unsigned int iter = 0; iter < fMax; iter++) {
      total += iter;
   }
   return total;
}

unsigned int Maths::GetMax() const {
   return fMax;
}
