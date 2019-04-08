// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   The previous sample program (Class2.cpp) set up a class in a
    somewhat nontraditional manner.  Functionally, this program is
    identical to the previous one, but it contains several internal
    changes.  Once again, the class defined here is designed to
    simulate a die to generate an integer random number:

   CONSTRUCTORS
      Dice(int sides) -- sides specifies number of "sides" for the
                         die:  2 for a coin, 6 for a regular die, etc.

   int Roll() -- Returns the random roll of the die, an integer
                 between 1 and the number of sides on the die

   ACCESSORS
      int NumSides() -- Returns the number of sides on the die
      int NumRolls() -- Returns the number of rolls of the die

   MODIFIERS
      none

   Notice below that the 'private' access specifier is explicitly stated.
    Also, notice that it is listed AFTER the 'public' access specifier;
    it is customary to show the public data first (since that is what
    will interest most users).
    
   The biggest change, though, is that the code for the member functions
    is listed OUTSIDE of the class construct.  This is done for two
    reasons.  First, it makes the class definitions more readable, as
    they are not cluttered with function code.  Second, the class
    implementation (member functions) is often put into a SEPARATE file
    from the interface (data members).  In fact, the client program is
    rarely put into the same file with any parts of the classes that it
    uses.  This means that this particular file (Class3.cpp) would
    usually appear as two or three individual files (see the next two
    sample programs for examples of this).

   The scope resolution operator (::) is used to indicate that a function
    is a member function of a specific class.  Even though these member
    functions are listed outside of the class construct, they are part of
    the class and must be thought of as being inside the class construct.
    They are merely listed elsewhere for the reasons described above.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw' and 'setiosflags'
#include <apvector.h>         // Required for 'apvector'
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


int main()
{
   apvector<int> percent(13, 0);
   Dice die1(6), die2(6);
   int num;

   for (num=1; num<=1000; num++)
      percent[die1.Roll()+die2.Roll()]++;

   cout << "ROLL   FREQUENCY    PERCENT\n";
   cout << "---------------------------\n";
   for (num=2; num<=12; num++)
   {
      cout << setw(10) << setiosflags(ios::left) << num
           << resetiosflags(ios::left);
      cout << setw(3) << setiosflags(ios::right) << percent[num]
           << resetiosflags(ios::left);
      cout << setw(12) << setprecision(1)
           << setiosflags(ios::right | ios::fixed)
           << static_cast<double> (percent[num]) / 1000 * 100 << "%\n";
   }

   cout << endl;
   return 0;
}