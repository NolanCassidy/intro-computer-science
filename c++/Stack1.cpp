// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how a stack can be used
   instead of a recursive approach to design a function
   to convert a decimal (base 10) integer into a binary
   number.  This sample program is a modification of the
   Recursion3.cpp program.

   In this example the 'isEmpty()' member function of the
   'stack' class is used to determine if the stack is
   empty.  Also, the 'pop(itemType &)' member function is
   used to remove an element off the top of the stack.
   Notice that an extra variable (value) is needed to
   temporarily store the popped value so that it can be
   displayed.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstack.h>          // Required for 'apstack'


void DecimalToBinary(int n)
// This function displays the binary number
//  representation of a base 10 integer (n).
{
   apstack<int> stack;
   int value;

   if (n < 0)
   {
      cout << "-";
      n = -n;
   }

   while (n > 1)
   {
      stack.push(n % 2);
      n = n / 2;
   }

   cout << n;

   while (! stack.isEmpty())
   {
      stack.pop(value);
      cout << value;
   }
}


int main()
{
   int num;
   cout << "Enter an integer:  ";
   cin >> num;

   cout << "\nThe binary representation of " << num << " is:  ";
   DecimalToBinary(num);

   cout << endl << endl;
   return 0;
}