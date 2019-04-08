// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the user of a 'switch-case'
    conditional structure.  Any actions that can be
    accomplished with a 'switch-case' structure can also
    be accomplished with an 'if-else' structure.  The
    'switch-case' structure, however, is often "nicer"
    to use when a specific variable can take on many
    values, and different actions must be taken for each
    value.  It consists of a series of conditions,
    followed by the actions to take for each condition.

   In the example below, the computer takes one of five
    actions, depending on the value of the variable
    'grade'.  After EACH set of statements, a 'break'
    statement MUST appear so that the computer jumps to
    the end of the 'switch-case' structure.  Also,
    while it is not necessary, it is usually a good
    idea to include a 'default' statement as the last
    case of the 'switch-case' structure as a sort of
    "catch-all" if none of the earlier conditions were
    met.

   Note that only character and integer type variables
    can be used with a 'switch-case' structure.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
   int grade;
   cout << "Enter your grade level:  ";
   cin >> grade;
   cout << endl;

   switch (grade)
   {
      case 9:
         cout << "You are a FRESHMAN.";
         cout << endl;
         break;

      case 10:
         cout << "You are a SOPHOMORE.";
         cout << endl;
         break;

      case 11:
         cout << "You are a JUNIOR.";
         cout << endl;
         break;

      case 12:
         cout << "You are a SENIOR.";
         cout << endl;
         break;

      default:
         cout << "You are not in high school!\n";
   }

   cout << endl;
   return 0;
}