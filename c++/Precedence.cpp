// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how precedence of operators
    can affect the results of calculations.  (Refer to a
    textbook for charts showing the specific rules of
    precedence for all of the C++ operators.)  By using
    parentheses, the same expression can be made to
    produce a variety of answers.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int x, y;

   x = 8; y = 3;
   cout << 3 + --x % 4 * --x - ++y * 2;
   cout << endl << endl;

   x = 8; y = 3;
   cout << (3 + --x) % 4 * (--x - ++y) * 2;
   cout << endl << endl;

   x = 8; y = 3;
   cout << 3 + --x % ((4 * --x) - ++y) * 2;
   cout << endl << endl;

   x = 8; y = 3;
   cout << 3 + --x % (4 * --x) - ++y * 2;
   cout << endl << endl;

   return 0;
}