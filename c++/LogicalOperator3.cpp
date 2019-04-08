// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program will NOT crash during runtime, even though the
    'if' statement contains a division by zero test.  This is
    because the computer runs through the comparisons in the 'if'
    statement in order, from left to right.  As soon as one of
    the checks fails, the computer moves to the next line and
    abandons the rest of the 'if' statement, so the division by
    zero is never reached.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int num1 = 4;
   int num2 = 0;

   if ((num2 != 0) && (num1 / num2 > 0.5))
      cout << "Bravo" << endl;
   
   return 0;
}