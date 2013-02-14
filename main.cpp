#include "functions.hpp"
#include "classes.hpp"

int main(int argc, char **argv) {
   Maths math;
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

   std::cout << "Current max: " << math.GetMax() << std::endl;
   max = AskMax("You want sum of max? " );
   math.SetMax(max);
   std::cout << "Result: " << math.Sum() << std::endl;

   return 0;
}
