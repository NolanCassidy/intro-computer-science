// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of the 'typedef'
    statement to create aliases for previously defined data
    types.  The 'typedef' statement does not create a new
    data type; it merely creates a new type name which may
    be used in place of the existing type name.  In the
    first example below, the name 'Integer' is defined to
    have the same meaning as 'unsigned int' and can be used
    in its place throughout the program.  The second example
    allows 'IntPtr' to be used in place of 'unsigned int *'
    throughout the program.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   typedef unsigned int Integer;
   typedef unsigned int * IntPtr;

   Integer num1;              // Declares 'num1' as an unsigned integer
   IntPtr num2;               // Declares 'num2' as an unsigned integer pointer variable

   num1 = 37;
   num2 = &num1;              // Sets 'num2' equal to the address of 'num1'

   cout << "The value of 'num1' is:    " << num1 << endl;
   cout << "The address of 'num1' is:  " << num2 << endl;
   cout << "The value of 'num1' is:    " << *num2 << endl;

   cout << endl;
   return 0;
}