// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates uses of an 'if-else'
    conditional structure.  An 'if-else' structure is
    the most common structure to use when it is
    necessary for the computer to make a decision.

   The first part of an 'if-else' structure is a
    condition.  It comes after the 'if' statement
    and must be completely contained withinin
    parentheses.  The condition should be followed
    by the statements to be executed if the condition
    is TRUE.  This part of the code should be contained
    within braces (unless it is a single statement).
    The next part of the structure is optional.  It is
    an 'else' statement, followed by the statements to
    be executed if the original condition is FALSE.

   NOTE:  Do NOT put a semicolon after the parentheses
          at the end of the 'if-else' condition.  Doing
          so will cause the 'if-else' structure to end
          prematurely, resulting in a compile-time error,
          a warning, or, at the very least, a program that
          not do what it was intended to do.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int num;
   cout << "Enter an integer:  ";
   cin >> num;
   cout << endl;


   if (num == 3);
      cout << "You typed in the number three." << endl << endl;


   if (num != 3)
      cout << "The number is not 3." << endl << endl;
   else
      cout << "The number is 3." << endl << endl;


   if (num > 3)
   {
      cout << "The number is greater than 3.\n";
      cout << "You did not type in the number three.";
      cout << endl;
   }
   else cout << "The number is less than or equal to 3.\n";


   cout << endl;
   return 0;
}