#include <cmath>
#include <iostream>

double Sqrt(double x) {
   return sqrt(x);
}

unsigned int FrequencyOfPrimes(unsigned int n) {
   unsigned int i, j;
   unsigned int freq = n - 1;

   for (i = 2; i <= n; ++i) {
      for (j = Sqrt(i); j > 1; --j) {
         if (i % j == 0) {
            --freq;
            break;
         }
      }
   }

   return freq;
}

unsigned int AskMax() {
   unsigned int max;

   std::cout << "You want number of primes lower than? ";
   std::cin >> max;
   if (max < 2) {
      std::cout << "Forcing to 2" << std::endl;
      max = 2;
   }

   return max;
}

int main(int argc, char **argv) {
   unsigned int max;

   max = AskMax();
   std::cout << "Result: " << FrequencyOfPrimes(max) << std::endl;
   return 0;
}
