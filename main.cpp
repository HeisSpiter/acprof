#include <cmath>
#include <iostream>

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

int main(int argc, char **argv) {
   unsigned int max;

   for (int i = 0; i < argc; ++i) {
      std::cout << "Arg " << i << ": " << argv[i] << std::endl;
   }

   max = AskMax("You want number of primes lower than? ");
   std::cout << "Result: " << FrequencyOfPrimes(max) << std::endl;

   max = AskMax("You want max resolution for Pi of? ");
   std::cout << "Result: " << Madhava(max) << std::endl;

   max = AskMax("You want factorial of? ");
   std::cout << "Result: " << Factorial(max) << std::endl;

   return 0;
}
