// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of two functions
    to convert a double into a string (apstring).
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'
#include <math.h>             // Required for 'pow'
#include <iomanip.h>          // Required for 'setprecision' and 'setiosflags'


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


apstring DoubleToString(double number)
//This function converts a double (number) into a string and returns the string
{
   apstring tempNumber, decimalPart;
   double tempNum = number;
   int digitLimit = 9, power = 1, digits = 0;

   //Determine how many digits are AFTER the decimal point
   while ((int(tempNum * power) != tempNum * power) && (digits < digitLimit))
   {
      power *= 10;
      digits++;
   };

   //If the decimal part of the number has LEADING zeros, make sure they are not lost when
   // that part of the number is temporarily converted to an integer
   decimalPart = IntegerToString(((number - int(number)) * pow(10, digits) + .5));
   if (decimalPart.length() < digits)
      for (int i=0; i<=digits - decimalPart.length(); i++)
         decimalPart = "0" + decimalPart;

   if (digits > 0)
      return IntegerToString(int(number)) + "." + decimalPart;
   else
      return IntegerToString(number);
}


void main()
{
   double num1 = 582.419;
   double num2 = 37.8592;

   cout << setprecision(4);
   cout << setiosflags(ios::fixed | ios::showpoint);

   // Add num1 and num2 as doubles
   cout << "Addition (as integers):  " << num1 + num2 << endl << endl;

   // Convert num1 and num2 to strings (apstrings) and add
   cout << "Addition (as strings):   " << DoubleToString(num1) + DoubleToString(num2);

   cout << endl << endl;
}
