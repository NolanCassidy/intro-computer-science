// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of 'rand()' to generate
    pseudo random numbers.  The syntax for displaying a single
    "random" number between 'low' and 'high' inclusive with
    the 'rand()' function is:
       cout << rand() % (high - low + 1) + low

   The generated numbers are actually pseudo (fake) random numbers
    because they are not truly random, but are based on a formula
    which must be "seeded."  The formula (which is built into the
    language and cannot easily be modified) is seeded by plugging
    a number into it.  Each different number used in the formula
    allows a different set of "random" numbers to be generated.
    Therefore, the best way to seed the generator is to base the
    seed on the computer's internal clock, since the clock is
    always producing numbers that are constantly changing.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw()'
#include <stdlib.h>           // Required for 'srand()' and 'rand()'
#include <time.h>             // Required for 'time()'


void DisplayRandomNumbers()
// This function generates and displays 6 pseudo
//  random integers between -9 and 15 inclusive.
{
   for (int count=1; count<=6; count++)
      cout << setw(6) << rand() % (15 - (-9) + 1) - 9 << endl;
}


int main()
{
   srand(time(0));  // Seed the random number generator

   DisplayRandomNumbers();

   cout << endl;

   return 0;
}