// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates that, because the variable 'x' is
    defined as part of the 'for' loop (which is OUTSIDE of the
    loop braces), its value is retained even after the loop is
    completed.  The scope of the variable is NOT limited to the
    loop.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   for (int x=0; x<1; x++)
   {
      cout << x << endl;
   }

   cout << x << endl;

   return 0;
}