// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This file is the header file for the 'Dice' class that is used by
    the sample program Class5.cpp.  This file contains only the
    interface section of the 'Dice' class.  The implementation section
    that was bundled with this file for the previous sample program
    (Class4.cpp) is now in a separate file called "dice5.cpp".

   Once again, notice the use of the compiler directives '#ifndef',
    '#define', and '#endif'.  They are used to make sure this segment
    of code is not compiled more than once.  Notice also, the addition
    of the line '#include "dice5.cpp"'.  It is this line that tells the
    compiler to include the member functions that belong to this 'Dice'
    class.  It is important that the dice5.cpp file be included at the
    END of this header file.  Including it at the beginning would be
    telling the compiler to compile the code for functions that have
    not yet been defined (and that would result in errors).
*/
#ifndef DICE5_H
#define DICE5_H


#include <stdlib.h>           // Required for 'srand()' and 'rand()'
#include <time.h>             // Required for 'time()'


class Dice
{
   public:
      Dice(int sides);	      // Constructor
      int Roll();             // Returns random roll
      int NumSides();         // Accessor, returns number of sides on die
      int NumRolls();         // Accessor, returns number of rolls of die
   private:
      int mySides;            // Number of sides on the die
      int myRollCount;        // Number of rolls of the die
};                            // Note the semicolon (;)


#include "dice5.cpp"


#endif