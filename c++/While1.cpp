// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of a 'while' loop to repeatedly
    execute an algorithm while a specific condition is true.  With a
    'while' loop, the condition under which the loop continues is
    located at the top (start) of the loop.  Because of this, with a
    'while' loop it is possible for the algorithm to execute zero
    times.  Therefore, when deciding which type of loop structure to
    use, if it is possible for the algorithm to occur zero times, a
    'while' loop (as opposed to a 'do-while' loop) should be used.
    Both 'while' and 'do-while' loops need to be used only when the
    number of times that the looping should occur is NOT known in
    advance of the start of the loop.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   double num;

   cout << "Enter a number:  ";
   cin >> num;

   while (num > 0)
   {
      cout << "You entered a positive number." << endl << endl;

      cout << "Enter a number:  ";
      cin >> num;
   }

   cout << endl;
   return 0;
}