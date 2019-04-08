// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   The previous sample program (Class3.cpp) has the client (user)
    program, the 'Dice' class interface, and the 'Dice' class
    implementation all in a single file.  Functionally, this program is
    identical to the previous one, but it has that single file broken
    into two parts:  the client program (which is in THIS file) and
    the 'Dice' class (which is in a separate file called "dice4.h".

   When a class construct is put into a separate file, it is usually
    given a filename with the same name as the class (or, as is the
    case here, a very similar name).  Also, the ending (suffix) of the
    file is usually ".h", which stands for "header".  For this example,
    the 'Dice' class has become a header file that needs to be included
    with this program.

   The list of header files below does NOT include those files that are
    needed for the 'Dice' class.  Because the class itself is now in a
    separate file, the header files needed for the 'Dice' class are
    included in the dice4.h file itself.  However, the line '#include
    "dice4.h"' has been added to the list below.  When the C++ compiler
    sees the "#include" compiler directive, it finds the specified file
    and adds it to the code in place of the "#include" directive.  The
    compiler will, essentially, be putting back together the parts of
    this program that we broke up into pieces.  So why did we break up
    our program?  Besides the fact that it makes each section of code
    shorter and easier to read, having the class be in one or two files
    of its own allows OTHER client programs to use the class.

   Notice that, instead of the "<" and ">" symbols, quotation marks are
    used to surround the "dice4.h" in the new #include compiler directive.
    The quotation marks are used to tell the compiler that the dice4.h
    file is located in the same place as this source file.  If we had
    used the "<" and ">" symbols, the compiler would have looked for the
    file in the special "include" directory where it looks for all of the
    standard files that are often included with our programs.  We could,
    of course, put a copy of our new header file into that directory and
    then use the "<" and ">" symbols.

   There are additional useful comments in the dice4.h file.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw' and 'setiosflags'
#include <apvector.h>         // Required for 'apvector'
#include "dice4.h"            // Required for 'Dice' class


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