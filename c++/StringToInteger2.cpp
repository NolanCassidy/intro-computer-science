// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016

#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;


int StringToInteger(string wordNum)
// This function takes a string (wordNum) and converts it to (and returns) an integer (intNum).
//  If the string is blank or has any non-numeric characters, a zero (0) is returned.

// Note that this function only works with non-negative integers.
{
   int intNum = 0,                            // Integer to be created from the string
       power = 1;                             // Multiplier for constructing the integer

   for (int i=wordNum.length()-1; i>=0; i--)  // Go through string from right to left
   {
      if (isdigit(wordNum[i]) != 0)           // See if the character is a digit (0 - 9)
         intNum = intNum + (power * (wordNum[i] - 48));  // Build the integer
      else
         return 0;

      power = power * 10;                     // Get ready for the next digit to the left
   }

   return intNum;
}


void main()
{
   string wordNum;
   int number;

   cout << "Enter a non-negative integer:  ";
   cin >> wordNum;

   number = StringToInteger(wordNum);
   cout << "\nThe integer value of your entry is " << number << ".\n\n";
}
