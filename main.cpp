#include <cmath>
#include <iostream>

double Sqrt(double x) {
   return sqrt(x);
}

unsigned long Factorial(unsigned char n) {
   return ((n == 0) ? 1 : n * Factorial(n - 1));
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

int main(int argc, char **argv) {
   unsigned int max;

   max = AskMax("You want number of primes lower than? ");
   std::cout << "Result: " << FrequencyOfPrimes(max) << std::endl;

   max = AskMax("You want factorial of? ");
   std::cout << "Result: " << Factorial(max) << std::endl;

   return 0;
}
