// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how the functions 'toupper()' and
    'tolower()' are used to change the case of character (char)
    variables.

   NOTE:  To change the case of an entire word (apstring), you
          will need to convert the case of each letter in the
          word; you cannot convert the case of the entire word
          all at once.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <ctype.h>            // Required for 'toupper' and 'tolower'


main()
{
   char letter1 = 'M';
   char letter2 = 'e';

   letter1 = tolower(letter1);
   cout << letter1;

   letter2 = toupper(letter2);
   cout << letter2;

   cout << endl << endl;
   return 0;
}