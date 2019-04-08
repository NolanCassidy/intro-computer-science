// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how the 'cin' function leaves
    the delimiter character (usually a '\n') in the input
    stream.  After reading the integer, when the 'getline'
    member function of the 'apstring' class is encountered,
    the newline character is already in the input stream,
    so it is immediately read, causing the string variable
    to contain only the newline character with no other data.

   To avoid this problem, the 'cin.ignore' function is used
    to skip up to 1000 characters (chars) to the end of the
    line, including the newline ('\n') character.  The 1000
    can be changed to almost any integer to get rid of any
    characters left over from the 'cin' statement.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


int main()
{
   int num;
   apstring word;

   // Problem code
   cout << "Enter an integer:  ";
   cin >> num;

   cout << "Enter a word:  ";
   getline(cin, word);

   
   // Fixed code
   cout << "\n\nEnter an integer:  ";
   cin >> num;

   cin.ignore(1000, '\n');

   cout << "Enter a word:  ";
   getline(cin, word);

   cout << endl;
   return 0;
}