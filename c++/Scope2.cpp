// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates that the scope of the variable 'count2'
    exists only inside the braces of the 'while' loop.  Because an
    'int' statement is used inside the loop, the 'count2' variable
    in the loop is actually a different variable than the 'count2'
    outside of the loop.  Upon exiting the loop, the value of the
    inner 'count2' is lost.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int count1 = 0,
       count2 = 0;

   while (count1 == 0)
   {
      int count2 = 5;
      cout << count2 << endl;
      count1++;
   }

   cout << count2 << endl;

   return 0;
}