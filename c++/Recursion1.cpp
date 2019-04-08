// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how both an iterative approach
    and a recursive approach can be used to create functions
    to display a line of 'n' asterisks.

   Because using iterations for this task (see the first
    function) is so simple, this may be a better approach
    than using using recursion (see the second example).

   NOTE:  In general, recursion should be used ONLY when it
          significantly simplifies the code without excessive
          performance loss.  Recursion is especially useful for
          dealing with nested structures or branching processes.
          Also, if a function uses large local arrays, recursive
          calls may cause an overload error.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


void DisplayStars1(int n)
// This function displays 'n' stars (asterisks).
{
   for (int i=1; i<=n; i++)
      cout << "*";
}


void DisplayStars2(int n)
// This recursive function displays 'n' stars.
{
   if (n > 0)
   {
      cout << "*";
      DisplayStars2(n-1);
   }
}


int main()
{
   int num;
   cout << "Enter an integer:  ";
   cin >> num;

   cout << "\nIterative stars:\n";
   DisplayStars1(num);

   cout << "\n\nRecursive stars:\n";
   DisplayStars2(num);

   cout << endl << endl;
   return 0;
}