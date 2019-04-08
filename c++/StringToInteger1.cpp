// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016

#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <string>

using namespace std;


int StringToInteger(string wordNum)
// This function takes a string (wordNum) and converts it to (and returns) an integer.
//  If the string is blank or has any non-numeric characters, a zero (0) is returned.

// Note that the FIRST character of the string is not checked for being a digit; this
//  allows a negative integer (one that begins with a "-") to be entered; if the first
//  character is a non-digit other than a "-", then the 'atoi()' function will return 0.
{
   for (int i=1; i<wordNum.length(); i++)  // See if any characters in the
      if (isdigit(wordNum[i]) == 0)        //  user's entry are non-digits.
         return 0;

   return atoi(wordNum.c_str());
}


void main()
{
   string wordNum;
   int number;

   cout << "Enter an integer:  ";
   cin >> wordNum;

   number = StringToInteger(wordNum);
   cout << "\nThe integer value of your entry is " << number << ".\n\n";
}
