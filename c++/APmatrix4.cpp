// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how a specific character in an element
    of an apmatrix of apstrings can be accessed.  This is similar
    to the way individual characters are accessed from apstrings.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'
#include <apmatrix.h>         // Required for 'apmatrix'


int main()
{
   apmatrix<apstring> word(4,3, "");  // Matrix of 12 apstrings, all empty

   word[2][1] = "aardvark";           // Set element in row 2, column 1
   cout << word[2][1] << endl;        // Show element in row 2, column 1
   cout << word[2][1][6] << endl;     // Show 7th character of above element

   return 0;
}