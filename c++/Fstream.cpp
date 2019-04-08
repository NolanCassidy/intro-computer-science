// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of 'ifstream' and 'ofstream'
    to read data from a sequential text file on a user's hard
    disk drive, convert the text in the file to all uppercase,
    and then write the information back to a separate text file.
    In the example below, the first argument when opening files
    is the name of the text file to be opened.  The second
    argument, which is optional, is the mode in which the file
    is opened.

   Because the stream extraction operator skips white space when
    reading from a text file, spaces and linefeed characters are
    not read into the computer's memory.  To read spaces and
    linefeed characters, the member function 'get(char &)' must
    be used.

   In this example the input and output objects are created on
    the same line that the names of the text files are assigned
    to them.  While this technique works, and it saves a line of
    code, performing these actions on two separate lines (as is
    shown in the other fstream example programs) is recommended.
    Also, the input and output files are not closed in this
    example.  While it is, technically, not necessary to close
    these files, in general it is probably better to do so.

   This example also demonstrates how 'ifstream' and 'ofstream'
    objects can be passed to functions.

   The example below reads individual characters from the file
    "lower.txt" into a variable.  After each character is read,
    if it is a lowercase letter, it is converted to uppercase.
    Then the character is written to the file "upper.txt."
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <fstream.h>          // Required for 'ifstream' and 'ofstream'


void ConvertCase(ifstream & input, ofstream & output)
// This function reads in individual characters from
//  a disk text file (input), converts lowercase
//  letters to uppercase, and then writes the characters
//  back to a different disk text file (output).
{
   char letter;

   while (input.get(letter))
   {
      if ((letter >= 'a') && (letter <= 'z'))
         letter -= 32;
      output << letter;
   }
}


int main()
{
   ifstream inFile  ("lower.txt", ios::in);
   ofstream outFile ("upper.txt", ios::out);

   ConvertCase(inFile, outFile);

   return 0;
}