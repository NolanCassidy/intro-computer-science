// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the concept of "scope."  In this
    example, the scope of the variable 'num' inside the inner
    braces lasts for only two statements.  Because 'num' is
    defined inside a separate set of braces, it is shielded
    from the outer value of 'num' and does not cause a redefinition
    error, but its value is lost upon exiting the inner braces.
    The variable 'num' inside the inner braces is actually a
    DIFFERENT variable than the 'num' defined outside the braces.
    However, had an 'int' statement not been used inside the inner
    braces, a new 'num' would not have been created and the value
    of the outer 'num' would have been changed.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int num = 0;

   {
      int num = 17;
      cout << num << endl;
   }

   cout << num << endl;

   return 0;
}