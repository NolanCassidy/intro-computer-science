// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the effect of dividing by zero.
    The division statement in the comparison that is part of
    the 'if' statement will cause the program to "crash" during
    runtime since the value of 'num2' is equal to zero, and
    division by zero is not defined.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int num1 = 4;
   int num2 = 0;

   if (num1 / num2 > 0.5)
      cout << "Bravo" << endl;
   
   return 0;
}