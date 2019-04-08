// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of the unary cast operator
    'static_cast' to temporarily convert (explicit conversion) one
    data type into another.  In the first calculation below, the
    quotient of 'num1' divided by 'num2' remains an integer, which
    means that the "real" answer (7.6) is truncated to 7 before
    it is stored in the variable 'answer'.  Note that even though
    'answer' is of type double, the result of the division becomes
    an integer before it has a chance to be stored in 'answer'.

   In the second calculation, the unary cast operator is used to
    temporarily convert 'num1' into a floating-point (decimal) number.
    The compiler then "promotes" 'num2' (implicit conversion) to
    the same type as 'num1' so that the calculation can be performed.
    (The compiler can only evaluate expressions in which the data
    types of the operands are identical.)  The result of the division
    (7.6), a floating-point value, is then stored in the variable
    'answer' as a decimal number.

   The last three output lines demonstrate use of the "cast" operator
    for explicitly converting values from one data type into another.
    The syntax is  (sometype) expression  or  sometype (expression)
    where 'sometype' is the name of the data type into which the value
    is being converted, and 'expression' is either a constant or a
    variable or a parenthesized expression.  The first form is an older
    form, inherited from C.  The second form is newer, introduced in
    C++.  The 'static_cast' form is the newest form of all.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int num1 = 38, num2 = 5;
   double answer;

   answer = num1 / num2;
   cout << answer << endl << endl;

   answer = static_cast <float> (num1) / num2;
   cout << answer << endl << endl;

   cout << 10 / 4 << endl;
   cout << (double) 10 / 4 << endl;
   cout << double (10) / 4 << endl << endl;

   return 0;
}