// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of 'ofstream' to write data
    to a sequential text file on a user's hard disk drive.  In
    the example below, the first argument when opening files
    is the name of the text file to be opened.  The second
    argument, which is optional, is the mode in which the file
    is opened.  Unless a path is specified, the file will be
    written in the same directory as the program.

   The example below will write "aardvark" and "giraffe" to
    "demofile3.txt" only if the file does not already exist.
    This is accomplished with the 'ios::noreplace' mode, which
    tells the computer to NOT replace or change the file at all if
    it already exists.  It is a way to prevent a file from being
    overwritten; only new files will be created with this option.
    If the file already exists, an error message will be displayed
    to the user via the 'cerr' stream.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <fstream.h>          // Required for 'ifstream' and 'ofstream'


int main()
{
   // If "demofile3.txt" already exists, do NOT change it at all
   ofstream outputFile3;                         // Create object for output
   outputFile3.open("demofile3.txt", ios::noreplace);  // Open for output

   if (outputFile3.fail())
      cerr << "The file \"demoFile3\" already exists, "
           << "so it will not be overwritten.\n\n";
   outputFile3 << "aardvark\n" << "giraffe\n";

   outputFile3.close();                          // Close output object

   return 0;
}