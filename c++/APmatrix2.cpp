// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the member functions 'numrows()',
    'numcols()', and 'resize()' of apmatrix.  The function
    'numrows()' returns the number of elements in each row
    of a two-dimensional array and 'numcols()' returns the
    number of elements in each column of the matrix.  The
    function 'resize(a,b)' changes the dimensions of an
    apmatrix to 'a' rows and 'b' columns (remember that the
    first element in each row and column of an apmatrix is
    position zero and the last elements are in positions
    'a - 1' and 'b - 1' respectively).
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apmatrix.h>         // Required for 'apmatrix'


int main()
{
   apmatrix<int> num(8,13);  // Create an 8 x 13 matrix of integers

   cout << num.numrows() << endl;
   cout << num.numcols() << endl << endl;

   num.resize(5, 20);

   cout << num.numrows() << endl;
   cout << num.numcols() << endl << endl;

   return 0;
}