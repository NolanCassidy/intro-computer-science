// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   The following sample program does what the previous sample program
    (Class1.cpp) does, but this program uses a class, instead of a
    function, to simulate a die.  The syntax for defining a class is
    very similiar to the syntax for a structure.  Like a structure, a
    semicolon must be placed after the closing brace of a class.
    Unlike structures, though, which contain only public data, classes
    can contain private data members which are only accessible by member
    functions of the classes.

   Classes allow programmers to create an Abstract Data Type (ADT),
    which is a data type with two components:  attributes (data
    members) and behaviors/operations (member functions).
    Abstraction is the separation of the specifications of an
    object (its interface) from its implementation.  Programmers
    can use classes without knowing (or needing to know) anything
    about their internal workings.  For instance, we can write code
    to use integers without worrying about how the computer
    implements the integers internally.  Classes promote information
    hiding.  This abstraction allows the implementation parts of a
    class to be changed without forcing any changes to the client
    (user) programs that use the class.  As long as the interface to
    the class remains unchanged, everything will still work as
    expected.

   A class can be thought of as an object.  It can be described in
    terms of its attributes and behaviors.  C++ supports Object
    Oriented Programming (OOP), which allows us to extend the language
    and create new data types.  OOP deals with modeling objects as
    user-defined data types.  Functions are still written and used to
    accomplish the behaviors of an object, but both the attributes and
    behaviors of the object can now be packaged together using the
    class construct.  Classes allow us to easily use an object in
    multiple programs.

   The sample program below uses a class to simulate 1000 rolls of two
    six-sided dice.  The frequency with which each number appears, along
    with the corresponding percentages, is displayed to the user.  Each
    die is represented by the class 'Dice'.  The number of sides of each
    die is specified by the parameter passed to the 'Dice' class when
    each 'Dice' object is first instantiated (created).

   Every class must have at least one constructor.  A constructor is a
    member function with the same name as the class.  A constructor
    cannot have a return type.  Although the program example below
    contains only a single constructor, classes can have multiple
    constructors.  Multiple constructors can be thought of as function
    overloading for the class.

   Notice that the word 'private' does not appear below.  This is
    because, by default, all of the data in a class are private.  So,
    in the program below, the variables 'mySides' and 'myRollCount' are
    private and can only be accessed by the constructor 'Dice()' and the
    member functions 'Roll()', 'NumSides()', and 'NumRolls()'.  (Future
    program examples, though, will include the 'private' access
    specifier, since it is customary to explicitly include it in class
    definitions.)  Client (user) programs can use public member
    functions, but they cannot directly access private data members.
    Private state variables and private member functions must be
    accessed through the public member functions which, in turn, can
    access the private data.  It is this setup that makes classes so
    appealing and so very useful.  The sample program below does not
    have direct access to the private state variables 'mySides' and
    'myRollCount', but must access them through the public member
    functions 'NumSides()' and 'NumRolls()' respectively.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw' and 'setiosflags'
#include <apvector.h>         // Required for 'apvector'
#include <stdlib.h>           // Required for 'srand()' and 'rand()'
#include <time.h>             // Required for 'time()'


class Dice
{
   int mySides;
   int myRollCount;
   public:
      Dice(int sides) { mySides = sides; }
      int Roll()      { return (rand() % mySides) + 1; }
      int NumSides()  { return mySides; }
      int NumRolls()  { return myRollCount; }
};


int main()
{
   apvector<int> percent(13, 0);
   Dice die1(6), die2(6);
   int num;

   srand(time(0));            // Seed the random number generator

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