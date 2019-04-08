// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how a stack can be used
   instead of a recursive approach to design a function
   to reverse a line of text input by the user.  This
   sample program is a modification of the Recursion4.cpp
   program.

   In this example the 'length()' member function of the
   'stack' class is used to determine if the stack is
   empty.  Also, the 'top()' and 'pop()' member functions
   are used together to remove an element off the top of
   the stack.  Notice that with the 'top()' member function
   the popped element can be output directly, eliminating
   the need for an extra variable to temporarily store the
   popped value.  However, since 'top()' does only returns
   the top element (and does not remove it), the 'pop()'
   member function must be used to remove the element from
   the stack.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstack.h>          // Required for 'apstack'


void ReverseLine()
// This function gets a line of input from the
//  user and then displays, in reverse order,
//  the characters that were entered.
{
   apstack<char> stack;
   char input;

   do
   {
      cin.get(input);

      stack.push(input);
   } while (input != '\n');

   cout << input;

   while (stack.length() > 0)
   {
      cout << stack.top();
      stack.pop();
   }
}


int main()
{
   cout << "Enter a word or phrase:\n\n";
   ReverseLine();
   cout << endl << endl;

   return 0;
}