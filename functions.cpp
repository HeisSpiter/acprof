#include "functions.hpp"

double Sqrt(double x) {
   return sqrt(x);
}

double Pow(double base, double exponant) {
   return pow(base, exponant);
}

unsigned long Factorial(unsigned char n) {
   return ((n == 0) ? 1 : n * Factorial(n - 1));
}

unsigned int FrequencyOfPrimes(unsigned int n) {
   unsigned int j;
   unsigned int freq = n - 1;

   for (unsigned int i = 2; i <= n; ++i) {
      for (j = Sqrt(i); j > 1; --j) {
         if (i % j == 0) {
            --freq;
            break;
         }
      }
   }

   return freq;
}

double Madhava(unsigned int n) {
   double result = 0.0;
   const double oneThird = -(1.0/3.0);

   for (unsigned int i = 0; i < n; ++i) {
      result += (Pow(oneThird, i) / (2.0 * i + 1.0));
   }

   result *= Sqrt(12);

   return result;
}

unsigned int AskMax(const std::string & sentence) {
   unsigned int max;

   std::cout << sentence;
   std::cin >> max;
   if (max < 2) {
      std::cout << "Forcing to 2" << std::endl;
      max = 2;
   }

   return max;
}
