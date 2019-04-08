// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of 'ifstream' to read data
    from a sequential text file on a user's hard disk drive.  In
    the example below, the first argument when opening files is
    the name of the text file to be opened.  The second argument,
    which is optional, is the mode in which the file is opened.

   For this example, two modes are used.  The first, 'ios::in',
    opens the file for input.  The second, 'ios::nocreate', tells
    the computer that if the file does not already exist, do
    NOT create it.  Without that option, if the file does not
    already exist, a blank (empty) file will be created.

   Because the stream extraction operator skips white space when
    reading from a text file, spaces and linefeed characters are
    not read into the computer's memory.  To read spaces and
    linefeed characters, the member function 'get(char &)' must
    be used.

   The example below reads individual characters from the file
    "demofile2.txt" into a variable.  After each character is
    read, it is displayed to the user.  If the file does not
    exist, an error message is displayed to the user via the
    'cerr' stream.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <fstream.h>          // Required for 'ifstream' and 'ofstream'


int main()
{
   char letter;

   ifstream inputFile2;               // Create object for input
   inputFile2.open("demofile2.txt", ios::in | ios::nocreate);

   if (inputFile2.fail())
      cerr << "The file \"demofile2.txt\" does not exist.\n\n";
   else
   {
      while (inputFile2.get(letter))  // Read character from diskfile
         cout << letter;
   }

   inputFile2.close();                // Close input object

   return 0;
}