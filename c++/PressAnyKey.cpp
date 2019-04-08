// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how the 'getch()' function
    can be used to get a single character from the user.
    This function does NOT require that the user press the
    ENTER key.  The 'getche()' function operates the same
    way but echoes the key that is pressed.

   Notice the use of the 'putch()' function.  This is used
    instead of 'cout', which you may find will not work as
    expected with the 'getch()' function.  In addition, by
    displaying a carriage return ('\r') and NOT displaying
    a line feed ('\n'), the second line of text is able to
    overwrite the first line of text.

   NOTE:  The ARROW keys will NOT work properly with this
          program.  This is because a single press of an
          arrow key sends TWO values to the computer.  The
          extra value is a 1 or a 0 to indicate whether or
          not a SHIFT key was being held down.
*/
#include <conio.h>            // Required for 'getch' and 'putch'


void PressAnyKey()
{
   char dummy = ' ';

   cputs("Press any key...");
   dummy = getch();

   putch('\r');  // Carriage return

// Uncomment the following statement to avoid having the
//  first line of text overwritten by the second line.
//   putch('\n');  // Line feed
}


int main()
{
   PressAnyKey();

   return 0;
}