// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates uses of the numerical values that
    the computer assigns to letters.  Characters are actually
    stored as ASCII values, so forcing any integer value into
    a 'char' or 'apstring' variable will result in an automatic
    conversion from an integer to the corresponding letter.
    The reverse is also true.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


int main()
{
   char letter1;
   for (letter1='A'; letter1<='Z'; letter1++)
      cout << letter1;
   cout << endl << endl;

   apstring letter2;
   for (int count=65; count<=90; count++)
      cout << (letter2 = count);
   cout << endl << endl;

   return 0;
}