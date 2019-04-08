// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how the 'isdigit()' and 'isalpha()'
    functions are used to determine if particular characters are
    digits (0 - 9) or letters (a - z  or  'A' - 'Z').  Both of
    these functions work only for single characters, either by
    themselves or as parts of strings.

   Note that if either function returns 'false' ('isdigit()' finds
    a letter or 'isalpha()' finds a digit), the value zero is
    returned (which is equivalent to 'false').  However, if a 'true'
    is returned, all that is known is that the returned value is
    NOT zero (as shown by the last two 'cout' statements below).
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <ctype.h>            // Required for 'isdigit' and 'isalpha'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


int main()
{
   apstring word = "abc123zyx987";
   char single = '5';

   if (isdigit(single))
      cout << "The character variable 'single' IS a DIGIT (0 - 9).\n\n";

   if (isdigit(word[1]) == false)
      cout << "The 2nd character of the word is NOT a digit (0 - 9).\n\n";

   if (isdigit(word[9]) != 0)
      cout << "The 10th character of the word IS a DIGIT (0 - 9).\n\n";

   if (isalpha(word[7]))
      cout << "The 8th character of the word IS an ALPHA (letter).\n\n";

   if (isalpha(word[11]) == 0)
      cout << "The 12th character of the word is NOT an ALPHA (letter).\n\n";

   cout << isdigit(word[9]) << endl;
   cout << isalpha(word[7]) << endl << endl;

   return 0;
}