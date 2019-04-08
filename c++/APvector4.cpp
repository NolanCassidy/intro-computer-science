// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how a specific character in an element
    of an apvector of apstrings can be accessed.  This is essentially
    the same way individual characters are accessed from apstrings.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'
#include <apvector.h>         // Required for 'apvector'


int main()
{
   apvector<apstring> word(4, "");  // Array of 4 apstrings, all empty

   word[2] = "aardvark";            // Set 3rd element
   cout << word[2] << endl;         // Show 3rd element
   cout << word[2][4] << endl;      // Show 5th character of 3rd element

   return 0;
}