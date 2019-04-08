// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of a 'do-while' loop to
    repeatedly execute an algorithm while a specific condition is
    true.  With a 'do-while' loop, the condition under which the
    loop continues is located at the bottom (end) of the loop.
    Because of this, the algorithm in a 'do-while' loop is always
    going to execute at least one time.  Therefore, when deciding
    which type of loop structure to use, if the algorithm should
    always execute at least once, a 'do-while' loop (as opposed to
    a 'while' loop) should be used.  Both 'do-while' and 'while'
    loops need to be used only when the number of times that the
    looping should occur is NOT known in advance of the start of
    the loop.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   double num;

   do
   {
      cout << "Enter a number:  ";
      cin >> num;

      if (num > 0)
         cout << "You entered a positive number." << endl << endl;
   } while (num > 0);

   cout << endl;
   return 0;
}