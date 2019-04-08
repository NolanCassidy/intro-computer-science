// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of the function 'atoi()'
    to convert a string (apstring) into an integer:
    int atoi ( const char * str );
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <stdlib.h>           // Required for 'atoi'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


int main()
{
   apstring word1 = "23";
   apstring word2 = "6";

   // Add word1 and word2 as strings
   cout << word1 + word2;
   cout << endl << endl;

   // Convert word1 and word2 to integers and add
   cout << atoi(word1.c_str()) + atoi(word2.c_str());
   cout << endl << endl;

   return 0;
}
