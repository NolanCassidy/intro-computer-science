// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how a recursive approach can
    be used to design a function to convert a decimal
    (base 10) integer into a binary number.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


void DecimalToBinary(int n)
// This function displays the binary number
//  representation of a base 10 integer (n).
{
   if (n < 0)
   {
      cout << "-";
      DecimalToBinary(-n);
   }
   else
      if (n < 2)  // Base case
         cout << n;
   else
   {
      DecimalToBinary(n/2);
      cout << n % 2;
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