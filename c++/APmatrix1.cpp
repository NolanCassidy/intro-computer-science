// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how arrays of type 'apmatrix' are
    defined and used to store and display data.  An apmatrix is
    a two-dimensional grid.  The format for declaring an apmatrix
    is 'apmatrix<type> var(num1,num2)' where 'type' is any
    variable type (int, double, char, apstring, etc), 'var' is
    the name of the variable you want to declare, 'num1' is the
    number of rows in the matrix, and 'num2' is the number of
    columns in the matrix.  The first element in each row and
    column of an apmatrix is position zero and the last position
    is 'num1 -1' and 'num2 - 1' respectively.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'
#include <apmatrix.h>         // Required for 'apvector'


int main()
{
   apmatrix<apstring> word(3,2);  // Creates an array of strings:  3 rows, 2 columns
   apmatrix<double> num(2,5);     // Creates an array of doubles:  2 rows, 5 columns
   int row, col;

   cout << "Enter six words/phrases:\n";
   for (row=0; row<=2; row++)
      for (col=0; col<=1; col++)
         getline(cin, word[row][col]);

   cout << "\nEnter ten real numbers:\n";
   for (row=0; row<=1; row++)
      for (col=0; col<=4; col++)
         cin >> num[row][col];


   cout << "\nHere are your words/phrases:\n";
   for (row=0; row<=2; row++)
   {
      for (col=0; col<=1; col++)
         cout << setw(15) << setiosflags(ios::left) << word[row][col];
      cout << endl;
   }

   cout << "\nHere are your numbers:\n";
   for (row=0; row<=1; row++)
   {
      for (col=0; col<=4; col++)
         cout << setw(10) << num[row][col] << "     ";
      cout << endl;
   }

   
   cout << endl << endl;
   return 0;
}