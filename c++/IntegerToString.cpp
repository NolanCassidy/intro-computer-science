// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of a recursive function
    to convert an integer into a string (apstring).
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


apstring IntegerToString(int num)
// This recursive function converts an integer (num)
//  into a string and returns the string.
{
   apstring string;

   if (num < 10)
   {
      string = num + 48;
      return string;
   }
   else
      return IntegerToString(num / 10) + ((num % 10) + 48);
}


void main()
{
   int num1 = 582;
   int num2 = 37;

   // Add num1 and num2 as integers
   cout << "Addition (as integers):  " << num1 + num2 << endl << endl;

   // Convert num1 and num2 to strings (apstrings) and add
   cout << "Addition (as strings):   " << IntegerToString(num1) + IntegerToString(num2);

   cout << endl << endl;
}
