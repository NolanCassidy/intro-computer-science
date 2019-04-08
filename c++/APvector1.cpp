// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how arrays of type 'apvector' are
    defined and used to store and display data.  The format for
    declaring an apvector is 'apvector<type> var(num)' where 'type'
    is any variable type (int, double, char, apstring, etc), 'var'
    is the name of the variable you want to declare, and 'num' is
    the number of elements that the array will hold.  The first
    element in an apvector is position zero and the last position
    is 'num -1'.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'
#include <apvector.h>         // Required for 'apvector'


int main()
{
   apvector<apstring> word(5);  // Creates an array of strings (0-4)
   apvector<double> num(5);     // Creates an array of doubles (0-4)
   int count;

   cout << "Enter five words/phrases:\n";
   for (count=0; count<=4; count++)
      getline(cin, word[count]);

   cout << "\nEnter five real numbers:\n";
   for (count=0; count<=4; count++)
      cin >> num[count];


   cout << "\nHere are your words/phrases:\n";
   for (count=0; count<=4; count++)
      cout << word[count] << "\n";

   cout << "\nHere are your numbers:  ";
   for (count=0; count<=4; count++)
      cout << num[count] << "   ";

   
   cout << endl << endl;
   return 0;
}