// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   In the first part of the C++ program below, 'var1' and
    'var2' are declared as pointer variables.  Space is
    allocated for 'var1' to point to an address containing
    the apstring "cat".  Then the address of 'var2' is set
    equal to the address of 'var1' so that, in effect,
    there are now TWO pointers pointing to the SAME memory
    address.

   In the second part of the program below, space is
    allocated for 'var1' and 'var2'.  Then the memory
    address referenced by 'var1' is assigned the value of
    "dog".  Finally, the value in the address referenced
    by 'var2' is set equal to the value in the address
    referenced by 'var1'.  While this may seem to doing
    exactly what was done in the first part of this
    program, it is not.  In this part the addresses
    referenced by the two pointer variables are NOT set
    equal to each other; the data values are.  In other
    words, the data value, not the address, is copied
    from 'var1' to 'var2'.  When you run this program you
    will see that the memory addresses are different.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


int main()
{
   apstring *var1, *var2;     // Declares 'var1' and 'var2' as pointer variables

   var1 = new apstring;       // Allocates memory for a new variable of type *var1
   *var1 = "cat";             // Stores the value "cat" in the address referenced by *var1
   var2 = var1;               // Sets the address of 'var2' equal to the address of 'var1'

   cout << "The address to which 'var1' points is:  " << var1 << endl;
   cout << "The address to which 'var2' points is:  " << var2 << endl << endl;

   cout << "The value stored in the address to which "
        << "'var1' points is:  " << *var1 << endl;
   cout << "The value stored in the address to which "
        << "'var2' points is:  " << *var2 << endl << endl;


   var1 = new apstring;       // Allocates memory for a new variable of type *var1
   var2 = new apstring;       // Allocates memory for a new variable of type *var2
   *var1 = "dog";             // Stores the value "dog" in the address referenced by 'var1'
   *var2 = *var1;             // Stores the value "dog" in the address referenced by 'var2'

   cout << "The address to which 'var1' points is:  " << var1 << endl;
   cout << "The address to which 'var2' points is:  " << var2 << endl << endl;

   cout << "The value stored in the address to which "
        << "'var1' points is:  " << *var1 << endl;
   cout << "The value stored in the address to which "
        << "'var2' points is:  " << *var2 << endl << endl;

   return 0;
}