// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of 'for' loops.
    There are three parts to the definition of a 'for'
    loop, separated by semicolons.  The first part
    defines or initializes the counter variable (the
    variable can be defined before the loop starts or
    within the loop itself).  It must be of type 'int'.
    The second part defines the exit condition of the
    loop.  It tells the computer to keep looping while
    that condition is true.  The last part of the loop
    definition tells the computer how to increment or
    decrement the counter variable.

   The statements in the body of the loop will be
    executed repeatedly until the loop has met its
    exit condition.  If the body of the loop contains
    only one statement, braces are not necessary.

   When deciding which type of loop structure to use,
    a 'for' loop should almost always be used when the
    number of times that the looping should occur is
    known in advance of the start of the loop.  However,
    if the decision on when to stop looping occurs during
    the loop, a 'while' or 'do-while' loop should be
    used instead.

   NOTE:  A common mistake is to put a semicolon
          after the parentheses at the end of a 'for' loop
          definition.  Doing so will make the computer
          think that there is an empty loop body, so the
          loop will execute properly, but nothing will
          happen during each execution (other than what is
          contained within the loop definition).
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int num, i;
   cout << "Enter an integer:  ";
   cin >> num;
   cout << endl;


   for (i=1; i<=num; i++)
      cout << "Hello\n";

   cout << endl;


   for (i=num; i>=1; i--)
      cout << i << endl;

   cout << endl;


   for (int j=-7; j<10; j+=num)
   {
      cout << "Bye\n";
      j++;
   }


   cout << endl;
   return 0;
}