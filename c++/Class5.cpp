// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   The previous sample program (Class4.cpp) has the client (user)
    program separate from the 'Dice' class code, but it has the
    'Dice' class interface and implementation both in a single file.
    While that is acceptable in many situations, it is often desirable
    to separate those two parts of a class.  After all, the client
    program should be dealing with the class ONLY through its
    interface; the implementation is, in many ways, a separate entity.
    Also, having the implementation (members functions) in a separate
    file allows that file to be precompiled so that the compiler does
    not have to recompile the file each time a program using the class
    is executed.

   The interface part of the 'Dice' class is named in the same manner
    used in the previous sample program.  It is called "dice5.h".  The
    member functions, though, are in a source file named "dice5.cpp".
    It is a source file (and not a header file) since what is contains
    is source code--member functions for the 'Dice' class.

  Because the dice5.cpp file is needed only by the 'Dice' class (which is
   in the dice5.h file), it should NOT be included in the client program
   (this file).  The dice5.h file is included here.  That file, in turn,
   includes the dice5.cpp file.  The idea is to keep separate the parts
   of this program that do not need to be together.  Also, by keeping this
   separation, if the name of the dice5.cpp file were to be changed, only
   the dice5.h file would be affected.

   There are additional useful comments in both the dice5.h and dice5.cpp
    files.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw' and 'setiosflags'
#include <apvector.h>         // Required for 'apvector'
#include "dice5.h"            // Required for 'Dice' class


int main()
{
   apvector<int> percent(13, 0);
   Dice die1(6), die2(6);
   int num;

   for (num=1; num<=1000; num++)
      percent[die1.Roll()+die2.Roll()]++;

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