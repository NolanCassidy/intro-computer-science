// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how a recursive approach can
    be used to design a function to reverse a line of
    text input by the user.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


void ReverseLine()
// This function gets a line of input from the
//  user and then displays, in reverse order,
//  the characters that were entered.
{
   char input;
   cin.get(input);

   if (input != '\n')
   {
      ReverseLine();
      cout << input;
   }
}


int main()
{
   cout << "Enter a word or phrase:\n\n";
   ReverseLine();
   cout << endl << endl;

   return 0;
}