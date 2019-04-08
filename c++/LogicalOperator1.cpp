// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates some uses of logical operators:
    Logical operators are used for combining comparison
    statements.  There are three logical operators:
       &&  =  and
       ||  =  or
       !   =  not
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int x=0, y=3;

   if (x)
      cout << "I am X" << endl;

   if (y)
      cout << "I am Y" << endl;

   if ((x == 0) || (y == 4))
      cout << "Yipee" << endl;

   if ((x == 0) && (y == 4))
      cout << "Joy" << endl;

   if (x != y)
      cout << "Yahoo" << endl;

   if (!(x == y))
      cout << "Yahoo again" << endl;

   return 0;
}