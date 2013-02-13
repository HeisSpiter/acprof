#include "functions.hpp"

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
