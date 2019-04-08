// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of function prototypes.
    Function prototypes are used to tell the compiler, in
    advance, the basic form that a function will take.  Each
    prototype needs to specify the name of the function, the
    number of arguments (if any) being passed to the function,
    and the type of each argument being passed.

   Function prototypes can be used, optionally, for aesthetic
    purposes to define, in one specific area, all of the
    functions that will be used in a program.  This makes it
    easier to see what functions are being used and how they
    are being implemented (without having to look through all
    of the code).  Function prototypes become mandatory when
    one function calls another function that has not yet been
    written into the code.  Unless a function is defined BEFORE
    a call to it is made, the compiler will not know about it
    and will report that it does not exist.  Prototypes are
    needed when function 'a' calls function 'b' and the same
    function 'b' calls function 'a'.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'

void GetNumbers(int &, int &, int &);
double GetAverage(int, int, int);
double GetSum(int, int, int);


int main()
{
   int x, y, z;
   GetNumbers(x, y, z);

   cout << "The average is:  " << GetAverage(x, y, z) << endl << endl;

   return 0;
}


double GetAverage(int num1, int num2, int num3)
// This function computes the average of three integers
//  and returns the result as type double.
{
   return GetSum(num1, num2, num3) / 3;
}


double GetSum(int first, int second, int third)
// This function computes the sum of three integers
//  and returns the result as type double.
{
   return first + second + third;
}


void GetNumbers(int & a, int & b, int & c)
// This function gets three integers from the user.
{
   cout << "Won't you please enter an integer? ";
   cin >> a;
   cout << "Won't you please enter a second integer? ";
   cin >> b;
   cout << "Won't you please enter just one more integer? ";
   cin >> c;
   cout << endl;
}