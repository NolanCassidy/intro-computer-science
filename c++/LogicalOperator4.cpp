// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program will crash during execution because a 'division
    by zero' error will occur as part of the "if" statement.
    Since the computer makes the comparisons in order (from left
    to right), the division by zero takes place BEFORE the check
    to see if the second number is a zero.  To make this program
    work properly, the order of the two comparisons should be
    reversed.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int num1 = 4;
   int num2 = 0;

   if ((num1 / num2 > 0.5) && (num2 != 0))
      cout << "Bravo" << endl;
   
   return 0;
}