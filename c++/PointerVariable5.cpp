// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how, if you are not careful,
    you can "lose" track of an address of (and, therefore,
    the value referenced by) a pointer variable.  While
    the code below is completely legal, the last assignment
    line (word2 = word1) causes the address referenced by
    'word2' to be lost, along with the value stored in that
    address.  In other words, "ant" is gone forever.

   While there are definitely times when you will want to
    eliminate unwanted information stored in data structures,
    there is a better way to accomplish such a task that
    does not waste memory.  The C++ statement 'delete'
    causes the address stored by a pointer variable to be
    returned to the heap.  The second part of this program
    shows how that is accomplished.  The freed up memory
    will be the first memory to be (re)allocated when the
    next 'new' operation is invoked.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


int main()
{
   apstring *word1, *word2;  // Declares 'word1' and 'word2' as pointer variables

   word1 = new apstring;     // Allocates memory for a new variable of type *word1
   word2 = new apstring;     // Allocates memory for a new variable of type *word2
   *word1 = "fish";          // Stores the value "fish" in the address referenced by 'word1'
   *word2 = "ant";           // Stores the value "ant" in the address referenced by 'word2'
   word2 = word1;            // Sets the address of 'word2' equal to the address of 'word1'

   cout << "The address to which 'word1' points is:  " << word1 << endl;
   cout << "The address to which 'word2' points is:  " << word2 << endl << endl;

   cout << "The value stored in the address to which "
        << "'word1' points is:  " << *word1 << endl;
   cout << "The value stored in the address to which "
        << "'word2' points is:  " << *word2 << endl << endl;


   word1 = new apstring;     // Allocates memory for a new variable of type *word1
   word2 = new apstring;     // Allocates memory for a new variable of type *word2
   *word1 = "fish";          // Stores the value "fish" in the address referenced by 'word1'
   *word2 = "ant";           // Stores the value "ant" in the address referenced by 'word2'
   delete word2;             // Frees up the memory that was being used by 'word2'
   word2 = word1;            // Sets the address of 'word2' equal to the address of 'word1'

   cout << "The address to which 'word1' points is:  " << word1 << endl;
   cout << "The address to which 'word2' points is:  " << word2 << endl << endl;

   cout << "The value stored in the address to which "
        << "'word1' points is:  " << *word1 << endl;
   cout << "The value stored in the address to which "
        << "'word2' points is:  " << *word2 << endl << endl;

   return 0;
}