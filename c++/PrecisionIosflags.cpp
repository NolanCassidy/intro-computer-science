// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of the 'setprecision()'
    and 'setiosflags()' functions.

   The 'setprecision()' function specifies the number of
    digits of precision to the right of the decimal point
    with which all future decimals are to be output.  This
    is referred to as a parameterized stream manipulator.
    The default precision is usually six digits.

   The 'setiosflags()' stream manipulator is used to
    format the output of decimals.  It can contain
    multiple options, each separated by the vertical
    bar (|) symbol.  Descriptions of a few of the options:

       ios::fixed      - force floating-point numbers to have
                         a set number of digits, as specified
                         by 'setprecision()'
       ios::scientific - force the output of floating-point
                         numbers in scientific notation;
                         e.g., 6.023e17 for 6.023 x 10^17
       ios::showpoint  - force a decimal point to be shown;
                         e.g., 7 will show as 7.0 or 7.0000
                         (with the specified number of digits)
       ios::left       - display numbers left-justified
       ios::right      - display numbers right-justified

   See a textbook for the rest (most) of the options.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setprecision' and 'setiosflags'


int main()
{
   double num1 = 82.123;
   double num2 = 82.1234567890123456789;

   cout << setprecision(8);

   cout << setiosflags(ios::fixed | ios::showpoint);
   cout << num1 << endl << endl;

   cout << setiosflags(ios::fixed | ios::showpoint);
   cout << num2 << endl << endl << endl;

   cout << setw(18);
   cout << setiosflags(ios::right);
   cout << num1 << endl << endl;

   cout << setw(18);
   cout << setiosflags(ios::left);
   cout << num2 << endl << endl << endl;

   return 0;
}