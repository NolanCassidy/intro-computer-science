// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how the function 'setw()' is
    used to specify the width of an output field.  It is
    very useful for lining up characters and displaying
    output (of both numbers and words) in columns.  Note
    that the 'setw()' function must be used before EACH
    value that is sent to the output stream. 
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw'


int main()
{
   cout << setw(12) << "Hi" << endl;
   cout << setw(12) << 123 << endl;
   cout << setw(12) << 3.14159 << endl;
   cout << setw(12) << "Hello" << endl;

   cout << setw(7);
   cout << "Bye!\n\n";

   cout << setw(7);
   cout << "Bye!" << endl << endl;

   return 0;
}