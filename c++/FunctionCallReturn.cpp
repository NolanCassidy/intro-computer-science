// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how a function can be defined
    as being a specific type of variable and can then
    return a value of that type.  Even though, in this
    manner, a function can return only a single value, the
    benefit of this approach is that the function call can
    be made from within a single statement, as demonstrated
    below in 'GetAverage' (which calls 'GetSum') and 'main()',
    (which calls 'GetAverage').  By defining a function as
    a variable, it becomes unnecessary to use an extra
    variable to store the result from the function.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


double GetSum(int first, int second, int third)
// This function computes the sum of three integers
//  and returns the result as type double.
{
   return first + second + third;
}


double GetAverage(int num1, int num2, int num3)
// This function computes the average of three integers
//  and returns the result as type double.
{
   return GetSum(num1, num2, num3) / 3;
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


int main()
{
   int x, y, z;
   GetNumbers(x, y, z);

   cout << "The average is:  " << GetAverage(x, y, z) << endl << endl;

   return 0;
}