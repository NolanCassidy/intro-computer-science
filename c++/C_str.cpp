// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the 'c_str' member function of the
    apstring class.  This function is needed to convert an
    apstring object into a const char * for use with classes
    and functions that do not support apstrings.

   This example will write the phrase "This is some sample text"
    to a text file specified by the user.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <fstream.h>          // Required for 'ifstream' and 'ofstream'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


int main()
{
   apstring filename;

   cout << "Enter a filename:  ";
   getline(cin, filename);

   ofstream outputFile;
   outputFile.open(filename.c_str(), ios::out);

   outputFile << "This is some sample text";

   outputFile.close();

   return 0;
}