// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the technique for passing an apvector
    to an individual function.  Note that the number of elements in
    the apvector is NOT defined in the function header.  Once an
    apvector is passed to a function, the 'resize()' function can
    be used to determine the size of the apvector.

   IMPORTANT:  Notice that in the 'DisplayArray' function the
    apvector is being passed as a REFERENCE parameter.  This is
    because not doing so would cause a copy of the array to be
    created, taking up both memory and time.  Arrays should
    almost always be passed to functions as reference parameters.
    If the array is not to be modified in the function, declare
    it as 'const' (as shown in the 'DisplayArray' header).
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apvector.h>         // Required for 'apvector'


void ModifyArray(apvector<int> & num)
{
   num[0] = 4;
   num[1] = 3;
   num[2] = 2;
   num[3] = 1;
}


void DisplayArray(const apvector<int> & num)
{
   cout << num[0] << endl;
   cout << num[1] << endl;
   cout << num[2] << endl;
   cout << num[3] << endl << endl;
}


int main()
{
   apvector<int> num(4, 0);  // Array of 4 integers, all set to zero

   DisplayArray(num);
   ModifyArray(num);
   DisplayArray(num);

   return 0;
}