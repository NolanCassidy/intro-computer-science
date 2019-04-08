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

   If using an apstring to hold the name of the text file to
    which data are to be written, the 'c_str()' member function
    of the apstring class will be needed, as shown below.  This
    function is needed to convert an apstring object into a
    const char* for use with classes and functions that do not
    understand apstrings.

   This example writes "I", "like", and "computers" (without
    the quotes, each on a separate line) to the file
    "demofile4.txt" each time this program is run.  The text
    file is always overwritten.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <fstream.h>          // Required for 'ifstream' and 'ofstream'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


int main()
{
   apstring filename = "demofile4.txt";

   ofstream outputFile4;                // Create object for output
   outputFile4.open(filename.c_str());  // Open file for output

   outputFile4 << "I"         << endl;
   outputFile4 << "like"      << endl;
   outputFile4 << "computers" << endl;

   outputFile4.close();                 // Close output object

   return 0;
}