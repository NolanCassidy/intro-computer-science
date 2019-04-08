// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how the data type 'char' can be
    store characters and strings, and how type 'apstring' can
    be used to store strings and phrases.  It also demonstrates
    the use of 'cin' and its member functions 'get()', 'ignore()',
    and 'getline()' to read characters and strings, and how
    'getline()' is used to read strings.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'

int main()
{
   char temp1;
   char temp2[15];            // Do NOT use built-in arrays for the APCS exam
   apstring temp3;

   cout << "Enter a single character:  ";
   cin.get(temp1);
   cin.ignore(1000, '\n');        // Skips the remaining input (up to 1000
                                  //  characters) to the end of the line

   cout << "Enter a word or phrase (up to 15 characters):  ";
   cin.getline(temp2, 15, '\n');  // Reads up to 15 characters and
                                  //  stops at the newline character

   cout << "Enter a line of text:  ";
   getline(cin, temp3);           // NOT null-terminated (\0)

   cout << endl;
   cout << "First:   " << temp1 << endl;
   cout << "Second:  " << temp2 << endl;
   cout << "Third:   " << temp3 << endl << endl;

   return 0;
}