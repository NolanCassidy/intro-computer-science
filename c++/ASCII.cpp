// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how the computer actually stores
    character values (type 'char') as integers.  As a result,
    a variable of type 'char' or a single character of an
    'apstring' (which is really a 'char' variable) can be
    assigned to an integer variable with no complaints from
    the compiler.  This makes it very easy to determine the
    ASCII values of characters and also convert ASCII values
    into their corresponding character parts.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


int main()
{
   apstring word = "cat";
   int num1 = word[1];

   char letter = 'A';
   int num2 = letter;

   cout << word << endl;
   cout << num1 << endl << endl;

   cout << letter << endl;
   cout << num2 << endl << endl;

   cout << char(97) << endl;
   cout << int('9') << endl << endl;

   return 0;
}