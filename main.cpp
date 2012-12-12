#include <cmath>
#include <iostream>

unsigned int FrequencyOfPrimes(unsigned int n) {
   unsigned int i, j;
   unsigned int freq = n - 1;

   for (i = 2; i <= n; ++i) {
      for (j = sqrt(i); j > 1; --j) {
         if (i % j == 0) {
            --freq;
            break;
         }
      }
   }

   return freq;
}

int main(int argc, char **argv) {
   unsigned int max;

   std::cout << "You want number of primes lower than? ";
   std::cin >> max;
   if (max < 2) {
      std::cout << "Forcing to 2" << std::endl;
   }
   std::cout << "Result: " << FrequencyOfPrimes(max) << std::endl;
   return 0;
}
