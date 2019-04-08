// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the member functions 'length()'
    and 'resize()' of apvector.  The function 'length()' returns
    the size of an array and 'resize(a)' changes the size of an
    apvector to 'a' (remember that the first element in an
    apvector is position zero and the last is position 'a - 1').
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apvector.h>         // Required for 'apvector'


int main()
{
   apvector<int> num(20);  // Create an array of 20 integers

   cout << num.length() << endl << endl;

   num.resize(50);

   cout << num.length() << endl << endl;

   return 0;
}