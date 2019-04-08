// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of the unary
    scope resolution operator (::).  This operator
    allows a global variable or constant to be used
    in an area where a local variable or constant
    with the same name has been defined.

   In the example below, the constant 'PI' has been
    defined with two different values, one globally
    and one locally.  By putting the :: in front of
    'PI' in 'main()', the computer knows to use the
    global value of 'PI' rather than the local value.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setprecision'


const double PI = 3.14159265358979323846;


int main()
{
   const double PI = 3.14;

   cout << setprecision(21);  // Set output stream precision
   cout << "LOCAL  PI = " << PI << endl;
   cout << "GLOBAL PI = " << ::PI << endl << endl;

   return 0;
}