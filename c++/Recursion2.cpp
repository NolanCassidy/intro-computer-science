// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how both an iterative approach
    and a recursive approach can be used to create functions
    to calculate the factorial of an integer.  (The factorial
    of an integer 'n' is the product of the integers from 1
    to n.)

   Because using iterations to compute the factorial (see the
    first function) is so simple, this may be a better approach
    than using using recursion (see the second example).

   NOTE:  In general, recursion should be used ONLY when it
          significantly simplifies the code without excessive
          performance loss.  Recursion is especially useful for
          dealing with nested structures or branching processes.
          Also, if a function uses large local arrays, recursive
          calls may cause an overload error.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int Factorial1(int n)
// This function uses iterations to determine
//  the factorial of an integer (n).
{
   for (int i=n-1; i>0; i--)
      n *= i;

   return n;
}


int Factorial2(int n)
// This function uses recursion to determine
//  the factorial of an integer (n).
{
   if (n == 1)
      return 1;
   else
      return n * Factorial2(n-1);
}


int main()
{
   int num;
   cout << "Enter an integer:  ";
   cin >> num;

   cout << "\nThe factorial of " << num << " using iterations is:\n";
   cout << Factorial1(num) << endl << endl;

   cout << "The factorial of " << num << " using recursion is:\n";
   cout << Factorial2(num) << endl << endl;

   return 0;
}