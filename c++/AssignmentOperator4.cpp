// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how the assignment operator =
    can be used multiple times in a single expression to set
    several variables equal to the same value.  In the
    expression below, the variables 'u' and 'v' are both set
    equal to 4, and then that value is used in the expression.
    Note that the variables 'u' and 'v' are set BEFORE the
    value of the variable 't' is calculated.
*/
#include <iostream.h>           // Required for 'cin' and 'cout'


int main()
{
   int t=7, u, v;

   t += u = v = 4;
   cout << t << endl;
   cout << u << endl;
   cout << v << endl << endl;

   return 0;
}