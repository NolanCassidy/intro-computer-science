// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how all of the elements of an apmatrix
    can be initialized to a specific value.  Unlike a built-in array,
    the elements of an apmatrix cannot be initialized to DIFFERENT
    values when they are declared.

   This program also shows how an apmatrix can be copied to another
    apmatrix of the same type.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'
#include <apmatrix.h>         // Required for 'apmatrix'


int main()
{
   apmatrix<apstring> word(2,3, "cat");     // Matrix of 6 strings, all set to "cat"
   apmatrix<apstring> animal(2,3, "goat");  // Matrix of 6 strings, all set to "goat"
   int num1, num2;


   cout << "ORIGINAL apmatrix 'word':\n";
   for (num1=0; num1<=1; num1++)            // Display contents of array 'word'
   {
      for (num2=0; num2<=2; num2++)
         cout << setw(15) << setiosflags(ios::left)
              << word[num1][num2];
      cout << endl;
   }

   cout << "\nORIGINAL apmatrix 'animal':\n";
   for (num1=0; num1<=1; num1++)            // Display contents of array 'animal'
   {
      for (num2=0; num2<=2; num2++)
         cout << setw(15) << setiosflags(ios::left)
              << animal[num1][num2];
      cout << endl;
   }


   word[0][0] = "fish";      // Set row 0, column 0 to "fish"
   word[0][1] = "elephant";  // Set row 0, column 1 to "elephant"
   word[0][2] = "leopard";   // Set row 0, column 2 to "leopard"
   word[1][0] = "zebra";     // Set row 0, column 0 to "zebra"
   word[1][1] = "bee";       // Set row 0, column 1 to "bee"
   word[1][2] = "giraffe";   // Set row 0, column 2 to "giraffe"

   animal = word;            // Copy array 'word' to array 'animal'


   cout << "\nNEW apmatrix 'word':\n";
   for (num1=0; num1<=1; num1++)            // Display contents of array 'word'
   {
      for (num2=0; num2<=2; num2++)
         cout << setw(15) << setiosflags(ios::left)
              << word[num1][num2];
      cout << endl;
   }

   cout << "\nNEW apmatrix 'animal':\n";
   for (num1=0; num1<=1; num1++)            // Display contents of array 'animal'
   {
      for (num2=0; num2<=2; num2++)
         cout << setw(15) << setiosflags(ios::left)
              << animal[num1][num2];
      cout << endl;
   }


   cout << endl;
   return 0;
}