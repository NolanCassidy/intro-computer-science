// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of assignment operators.
    Assignment operators include =, +=, *= -=, /=, %=, ++, and --.

   The = operator simply assigns to a variable a numerical value
    or the value of an expression.

   The +=, *=, -=, /=, and %= operators function as shown in this
    example:  The expression  a += 7  is the same as  a = a + 7.
    Assignment operators allow longer expressions to be shortened.

   The ++ can be used as a preincrement (e.g., ++a) or
    postincrement (e.g., a++) operator.  In the first example,
    the value of the variable 'a' is incremented by 1 BEFORE the
    expression of which 'a' is a part is analyzed, and then the
    new value of 'a' is used in the expression.  In the second
    example, the value of 'a' is incremented by 1 AFTER the
    expression is analyzed.

   The -- can be used as a predecrement or postdecrement operator,
    much in the same way as the ++ operator is used.  Instead of
    being incremented by 1, though, the variable is decremented
    by 1.  The increment and decrement operators can be used
    multiple times with the same variable, although doing so can
    cause an expression to look strange and be difficult to
    interpret.  For example, if ++++a-- appears in an expression,
    the variable 'a' will first be incremented by 2, the new
    value will be used in the expression, and then the value of
    'a' will be decremented by 1.
*/
#include <iostream.h>           // Required for 'cin' and 'cout'


int main()
{
   int a=3, b=4, c=5;

   a += ++b;
   cout << a << endl;
   cout << b << endl;

   c -= --a + b--;
   cout << a << endl;
   cout << b << endl;
   cout << c << endl;

   cout << --b << endl;
   cout << b-- << endl;
   cout << b << endl;

   a *= a++;
   cout << a << endl;

   b *= ++b;
   cout << b << endl;

   return 0;
}