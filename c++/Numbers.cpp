// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of two of the
    more common types of numerical variables available
    in C++.  Note that if a non-integer is assigned to
    an integer variable (as is the case with 'num5'
    below), the value will be truncated.  Note, also,
    that the variables 'num1' and 'num4' are not
    initialized to any value.  This will result in
    warnings when the program is compiled and
    unpredictable output.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


main()
{
   int    num1, num2=3;
   double num3=17.425, num4;
   int    num5=658.9;

   cout << num1 << endl;
   cout << num2 << endl;
   cout << num3 << endl;
   cout << num4 << endl;
   cout << num5 << endl;

   cout << endl;

   return 0;
}