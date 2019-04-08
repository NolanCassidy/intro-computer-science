// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This file is the source file containing the implementation section
    (member functions) for the 'Dice' class, which is defined in the
    dice5.h header file.  It is that file which calls this one.  The
    use of the scope resolution operator (::) tells the compiler that
    the functions below are member functions of the 'Dice' class.
*/

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