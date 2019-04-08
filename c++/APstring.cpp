// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the member functions 'length()',
    'substr()', and 'find()' of the AP class 'apstring.'  It
    also shows how apstrings can be concatenated (put together
    to form a longer string).  The function 'length()' returns
    the size (in characters) of an apstring, 'substr(a,b)'
    returns 'b' characters from the apstring starting at
    position 'a' (remember that the first character of an
    apstring is in position zero), and 'find(c)' returns the
    starting position of the first occurrence of the string 'c'.

   Note that characters are actually stored as ASCII values, so
    forcing a letter into an integer variable results in an
    automatic conversion from a letter to type 'int'.  This is
    very useful for finding the ASCII values of characters and
    vice versa.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


main()
{
   apstring word = "automobiles";
   int num;

   cout << word << endl;
   cout << word.length() << endl << endl;

   num = int(word[2]);        // Can also be written:  num = word[2];
   cout << word[2] << endl;
   cout << num << endl << endl;

   cout << word.substr(4,3) << endl;
   cout << word.find("bil") << endl << endl;

   cout << word + word << endl;

   cout << endl;

   return 0;
}