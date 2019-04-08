// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This file is the header file for the 'Dice' class that is used
    by the sample program Class4.cpp.  This file contains the complete
    'Dice' class (both the interface and the implementation) that
    was bundled with the client program in the sample program Class3.cpp.

   Notice the use of the compiler directives '#ifndef', '#define', and
    '#endif'.  They are used to make sure that this header file is not
    compiled twice.  Header files are often included in many C++ source
    files, and many times more than one of those files will be included
    in another source file.  Without these compiler directives, the code
    below would be compiled multiple times, resulting in errors.  The
    name "DICE_H" is a customary way of labeling this section of code
    (using all capital letters, using the name of the file, and changing
    the "." to an underscore).  These directives tell the compiler that
    if the section of code called "DICE4_H" is not already defined, define
    it here.  If it is already defined, then ignore this code.
*/
#ifndef DICE4_H
#define DICE4_H


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


Dice::Dice(int sides)
// Postcondition:  Initialize all private fields
{
	
   srand(time(0));  // Seed random number generator

   mySides = sides;
   myRollCount = 0;
}


int Dice::Roll()
// Postcondition: Updates # of rolls of die;
//                Returns random die roll
{
   myRollCount++;                  // Increment roll counter
   return (rand() % mySides) + 1;  // Return value in range (1 - mySides)
}


int Dice::NumSides()
// Postcondition:  Returns # of sides of die
{
   return mySides;
}


int Dice::NumRolls()
// Postcondition:  Returns # of rolls of die
{
   return myRollCount;
}


#endif