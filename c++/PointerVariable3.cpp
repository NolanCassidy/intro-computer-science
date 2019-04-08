// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   When a C++ program is run, a certain segment of the
    computer's RAM is available for the program to use.
    This 'stack' of memory is known as a heap.  The C++
    statement 'new' is used to allocate additional memory
    for use with pointer variables.  The statement 'new'
    is followed by a data type, which will result in a
    block of memory being returned which is large enough
    to hold an object of the specified type.  If the
    allocation is successful, the operation returns the
    starting address of the new block of memory; otherwise,
    it returns the NULL address zero.

   In the example below, memory is allocated for the pointer
    variable 'place', which stores a memory location.  The
    indirection operator (*) performs a dereference.  In a
    sense, the pointer variable 'place' is a reference
    variable for another address, but that address has no
    other variable name.  The statement below (*place = 73)
    means to dereference 'place' and work directly with the
    memory location that was aliased.  This is an example of
    an assignment to a location through a pointer variable,
    and it is known as indirection.  The pointer variable
    'place' does not store an integer; it redirects you to
    where the desired information is located.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int *place;                // Declares 'place' as a pointer variable

   place = new int;           // Allocates memory for a new variable of type *place

   *place = 73;               // Stores the value 73 in the address referenced by 'place'

   cout << "Although not necessary for us to know,\n"
        << "the address to which 'place' points is:  " << place << endl << endl;

   cout << "The value stored in the address to which "
        << "'place' points is:  " << *place << endl << endl;

   return 0;
}