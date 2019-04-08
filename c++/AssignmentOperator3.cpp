// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates an application of the assignment
    operator %=.  In this example, a runtime error will occur
    since division by zero takes place.  The statement that
    causes the error,  j %= i - i,  could also be written as
    j = j % (i - i), which makes it easier to see why division
    by zero takes place.
*/
#include <iostream.h>           // Required for 'cin' and 'cout'


int main()
{
   int i=4, j=5;

   j %= i - i;
   cout << j << endl;
   cout << i << endl;

   return 0;
}