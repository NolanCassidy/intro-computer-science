// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how all of the elements of an apvector
    can be initialized to a specific value.  Unlike a built-in array,
    the elements of an apvector cannot be initialized to DIFFERENT
    values when they are declared.

   This program also shows how an apvector can be copied to another
    apvector of the same type.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'
#include <apvector.h>         // Required for 'apvector'


int main()
{
   apvector<apstring> word(3, "cat");     // Array of 3 strings, all set to "cat"
   apvector<apstring> animal(3, "goat");  // Array of 3 strings, all set to "goat"
   int i;


   for (i=0; i<=2; i++)                   // Display the contents of array 'word'
      cout << "word:  " << word[i] << endl;
   cout << endl;

   for (i=0; i<=2; i++)                   // Display the contents of array 'animal'
      cout << "animal:  " << animal[i] << endl;
   cout << endl;


   word[0] = "fish";
   word[1] = "elephant";
   word[2] = "leopard";
   animal = word;                         // Copy array 'word' to array 'animal'


   for (i=0; i<=2; i++)                   // Display the contents of array 'word'
      cout << "word:  " << word[i] << endl;
   cout << endl;

   for (i=0; i<=2; i++)                   // Display the contents of array 'animal'
      cout << "animal:  " << animal[i] << endl;
   cout << endl;

   return 0;
}