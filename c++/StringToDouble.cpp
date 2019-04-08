// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of a function
    to convert a string into a double.
*/
#include <iostream>         // Required for 'cin' and 'cout'
#include <string>
#include <math.h>             // Required for 'pow'

using namespace std;


double StringToDouble(string wordNum)
// This function converts a string (wordNum) into a double and returns the double.

// Note that this function only works with non-negative (and relatively small) doubles.
{
   size_t found = wordNum.find(".");
   if (found != string::npos)
   {
      return atoi(wordNum.substr(0, wordNum.find(".")).c_str()) +
         (atoi(wordNum.substr(wordNum.find(".")+1, wordNum.length()-wordNum.find(".")-1).c_str()))
         /(pow(10, wordNum.length()-wordNum.find(".")-1));
   }
   else
      return atoi(wordNum.c_str());
}


void main()
{
   string wordNum;
   double number;

   cout << "Enter a non-negative double:  ";
   cin >> wordNum;

   number = StringToDouble(wordNum);
   cout << "\nThe double value of your entry is " << number << ".\n\n";
}
