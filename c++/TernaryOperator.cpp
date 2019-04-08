// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of the only ternary
    operator in C++ (it takes three operands).  The operands,
    together with the conditional operator, form a
    conditional expression.  The first operand is a condition,
    the second operand is the value for the entire conditional
    expression if the condition is TRUE, and the third operand
    is the value for the entire conditional expression if the
    condition is FALSE.  The main reason for using the ternary
    operator is to save space.

   In the code below, the first conditional expression
    determines if the user-entered integer 'num1' is positive
    or negative and then displays the appropriate word to the
    user.  The second conditional expression sets the
    variable 'num2' equal to the square of 'num1' if 'num1' is
    greater than five, or sets 'num2' equal to the cube of
    'num1' if 'num1' is not greater than five.  The value of
    'num2' is then displayed to the user.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int num1, num2;

   cout << "Enter an integer:  ";
   cin >> num1;
   cout << endl;

   cout << (num1 > 0 ? "Positive" : "Negative");
   cout << endl << endl;

   num2 = num1 > 5 ? num2 = num1 * num1 : num2 = num1 * num1 * num1;
   cout << num2 << endl << endl;

   return 0;
}