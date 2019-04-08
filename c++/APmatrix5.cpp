// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the technique for passing an apmatrix
    to an individual function.  Note that the number of elements
    in the apmatrix is NOT defined in the function header.  Once an
    apmatrix is passed to a function, the 'resize()' function can
    be used to determine the size of the apmatrix.

   IMPORTANT:  Notice that in the 'DisplayArray' function the
    apmatrix is being passed as a REFERENCE parameter.  This is
    because not doing so would cause a copy of the array to be
    created, taking up both memory and time.  Arrays should
    almost always be passed to functions as reference parameters.
    If the array is not to be modified in the function, declare
    it as 'const' (as shown in the 'DisplayArray' header).
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apmatrix.h>         // Required for 'apmatrix'


void ModifyArray(apmatrix<int> & num)
{
   num[0][0] = 6;
   num[0][1] = 5;
   num[0][2] = 4;

   num[1][0] = 3;
   num[1][1] = 2;
   num[1][2] = 1;
}


void DisplayArray(const apmatrix<int> & num)
{
   cout << num[0][0] << " ";
   cout << num[0][1] << " ";
   cout << num[0][2] << endl;

   cout << num[1][0] << " ";
   cout << num[1][1] << " ";
   cout << num[1][2] << endl << endl;
}


int main()
{
   apmatrix<int> num(2,3, 0);  // Array of 6 integers, all set to zero

   DisplayArray(num);
   ModifyArray(num);
   DisplayArray(num);

   return 0;
}