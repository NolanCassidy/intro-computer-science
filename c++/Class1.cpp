// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   The following sample program simulates 1000 rolls of two six-sided
    dice.  It is written WITHOUT the use of classes.  Each die is
    represented by the function 'die()', which returns a value
    representing the result of a "roll".  Notice that the number of
    sides of each die is specified by the parameter passed to the
    'die()' function.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw' and 'setiosflags'
#include <apvector.h>         // Required for 'apvector'
#include <stdlib.h>           // Required for 'srand()' and 'rand()'
#include <time.h>             // Required for 'time()' and 'clock()'


int die(int side)
{
   return rand() % side + 1;
}


main ()
{
   apvector<int> percent(13, 0);
   int num;

   srand(time(0));            // Seed the random number generator

   for (num=1; num<=1000; num++)
      percent[die(6) + die(6)]++;

   cout << "ROLL   FREQUENCY    PERCENT\n";
   cout << "---------------------------\n";
   for (num=2; num<=12; num++)
   {
      cout << setw(10) << setiosflags(ios::left) << num
           << resetiosflags(ios::left);
      cout << setw(3) << setiosflags(ios::right) << percent[num]
           << resetiosflags(ios::left);
      cout << setw(12) << setprecision(1)
           << setiosflags(ios::right | ios::fixed)
           << static_cast<double> (percent[num]) / 1000 * 100 << "%\n";
   }

   cout << endl;
   return 0;
}