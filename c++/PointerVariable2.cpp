// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   The program demonstrates how a pointer variable can point
    to no address at all.  It becomes a NULL pointer.  This
    is accomplished in one of two ways, both of which are
    shown below.  Be aware that the last two 'cout'
    statements below will generate run-time errors.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int *location;             // Declares 'location' as a pointer variable


   cout << "The garbage address to which "
        << "'location' points is:  " << location << endl << endl;

   cout << "The value of the garbage address to which "
        << "'location' points is:  " << *location << endl << endl;


   location = 0;              // Declares 'location' to be a NULL variable
   cout << "The (non-existent) address of 'location' is:  " << *location << endl;

   location = NULL;           // Note that NULL must be capitalized
   cout << "The (non-existent) address of 'location' is:  " << *location << endl << endl;


   return 0;
}