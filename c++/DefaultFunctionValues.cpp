// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates defining functions with default
    values for the variables.  If a function call is made
    without the necessary arguments, the computer will look to
    see if default values were given in the function header.
    The default values can be overridden by including arguments
    with the function call.  Note that in the second example
    below, only the second default value is used.  Since
    arguments in function calls are matched up one-to-one with
    parameters in the function headers, it is not possible to,
    for instance, have the first default value used and send in
    a new second argument.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int Area(int length = 3, int width = 2)
// This function omputes and returns the area of a
//  rectangle with the given sides (length * width).
{
   return length * width;
}


int main()
{
   cout << "The area of a 3 x 2 rectangle is "
        << Area() << "." << endl << endl;

   cout << "The area of a 5 x 2 rectangle is "
        << Area(5) << "." << endl << endl;
 
   cout << "The area of a 4 x 7 rectangle is "
        << Area(4, 7) << "." << endl << endl;
 
   return 0;
}