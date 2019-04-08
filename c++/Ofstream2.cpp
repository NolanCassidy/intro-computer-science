// Dave Goldsmith
// Redwood High School
// C++ Computer Programming
// October 30, 1999
// Ofstream2.cpp
/*
   This program demonstrates the use of 'ofstream' to write data
    to a sequential text file on a user's hard disk drive.  In
    the example below, the first argument when opening files
    is the name of the text file to be opened.  The second
    argument, which is optional, is the mode in which the file
    is opened.  Unless a path is specified, the file will be
    written in the same directory as the program.

   The example below writes "82" to the file "demofile2.txt",
    but adds on (appends) to any existing data (instead of
    overwriting it).  This is due to the 'ios::app' mode that
    is used.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <fstream.h>          // Required for 'ifstream' and 'ofstream'


int main()
{
   // Append (add on) to any existing file named "demofile2.txt"
   int num=82;
   ofstream outputFile2;                         // Create object for output
   outputFile2.open("demofile2.txt", ios::app);  // Open for output

   outputFile2 << num << "\n";

   outputFile2.close();                          // Close output object

   return 0;
}