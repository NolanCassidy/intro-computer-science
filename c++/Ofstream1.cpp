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

   In the example below, the mode 'ios::out' is used to open the
    file for output (it is usually unnecessary).  This example
    writes "cat", "37", and "dog" (without the quotes, each on
    a separate line) to the file "demofile1.txt" each time this
    program is run.  The text file is always overwritten.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <fstream.h>          // Required for 'ifstream' and 'ofstream'


int main()
{
   // Write over (replace) any existing file named "demofile1.txt"
   ofstream outputFile1;                         // Create object for output
   outputFile1.open("demofile1.txt", ios::out);  // Open for output

   outputFile1 << "cat" << endl;
   outputFile1 << 37    << endl;
   outputFile1 << "dog" << endl;

   outputFile1.close();                          // Close output object

   return 0;
}