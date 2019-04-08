// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how a recursive approach can
    be used to design a function to display every possible
    permutation of letters in a word entered by the user.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


void Swap(char & letA, char & letB)
// This function takes two char variables
//  (letA, letB) and interchanges (swaps) them.
{
   char temp;  // Temporary variable used during swap
   temp = letA;
   letA = letB;
   letB = temp;
}


void Permutations(apstring & mix, int n)
// This function returns every possible combination
//  (permutation) of an apstring (scrambled).
{
   if (n <= 1)  // Base case
      cout << mix << endl;
   else
      for (int i=0; i<n; i++)
      {
         Swap(mix[i], mix[n-1]);
         Permutations(mix, n-1);
         Swap(mix[n-1], mix[i]);
      }
}


int main()
{
   apstring word;
   cout << "Enter a SHORT word:  ";
   getline(cin, word);

   cout << "\nThe permutations of \"" << word << "\" are:\n\n";
   Permutations(word, word.length());

   cout << endl;
   return 0;
}