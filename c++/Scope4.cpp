// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates that the scope of the variable 'y'
    exists only inside the braces of the 'for' loop.  Because the
    variable 'y' is defined ONLY inside the loop, trying to refer
    to the variable 'y' outside the loop results in a compilation
    error, since 'y' is not defined outside of the loop.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int x=0;

   for (x=0; x<1; x++)
   {
      int y=3;
      cout << y << endl;
   }

   cout << y << endl;

   return 0;
}