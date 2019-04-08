// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates a simple declaration and use of
    a pointer variable.  A pointer variable is declared by
    using the asterisk operator (*) with already-defined or
    existing data types.  Pointer variables are often used
    in conjunction with the address operator (&) which
    returns the address of a variable.

   In the example below, the pointer variable 'where' does
    NOT store an integer; it instead stores the ADDRESS
    where an integer is stored in the computer's memory.
    Addresses are machine-dependent.  As is the case with
    any newly-declared variable, the pointer variable
    'where' will contain a garbage address until it is set
    equal to the address of an integer.

   The (*) operator can also be called the dereferencing
    operator.  It is a unary operator and returns the
    contents of the address to which it is applied.  Notice
    that the (*) operator is used in two different ways in
    this program.  When it is part of a variable declaration
    (int *where), it is setting up a pointer variable.  When
    it is used as part of a statement (cout << *where), it
    is dereferencing a memory address.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int num;                   // Declares 'num' as an integer variable
   int *where;                // Declares 'where' as a pointer variable

   num = 5;                   // Sets 'num' equal to the integer 5
   where = &num;              // Sets 'where' equal to the address of 'num'

   cout << "The value of 'num' is:    " << num << endl;
   cout << "The address of 'num' is:  " << where << endl;
   cout << "The value of 'num' is:    " << *where << endl << endl;

   return 0;
}
