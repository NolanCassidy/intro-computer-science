// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the concept of overloading
    functions.  An overloaded function is a function that
    serves more than one purpose.  In other words, two or
    more different functions can have the same name so
    long as they take different numbers of arguments
    and/or different types of arguments.  This allows the
    computer to distinguish between the different functions
    when they are called.

   In this example the function 'Cube' is the name of two
    separate functions.  The first function takes, as its
    argument, a single integer.  The second function of the
    same name takes a single double.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int Cube(int number = 3)
// This function computes and returns
//  the cube of an INTEGER.
{
   cout << "This is the INT \"cube\" function:\n";
   return number * number * number;
}


double Cube(double number = 2.6)
// This function computes and returns
//  the cube of a DOUBLE.
{
   cout << "This is the DOUBLE \"cube\" function:\n";
   return number * number * number;
}


int main()
{
   cout << Cube(4) << endl << endl;
   cout << Cube(4.3) << endl << endl;

   return 0;
}