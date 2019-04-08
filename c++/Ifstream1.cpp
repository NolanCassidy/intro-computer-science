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

   The example below reads words from the file "demofile1.txt"
    into a variable.  After each word is read, it is displayed
    to the user.  If the file does not exist, an error message
    is displayed to the user via the 'cerr' stream.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <fstream.h>          // Required for 'ifstream' and 'ofstream'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


int main()
{
   apstring word;

   ifstream inputFile1;           // Create object for input
   inputFile1.open("demofile1.txt", ios::in | ios::nocreate);

   if (inputFile1.fail())
      cerr << "The file \"demofile1.txt\" does not exist.\n\n";
   else
   {
      while (inputFile1 >> word)  // Read word from diskfile
         cout << word << endl;
   }

   inputFile1.close();            // Close input object

   return 0;
}