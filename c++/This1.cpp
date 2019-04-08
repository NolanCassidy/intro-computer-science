// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how the 'this' pointer returns
    a reference to iself.  The 'this' pointer is a C++
    reserved word which means "the pointer to the current
    object."  It is a predefined pointer that points to the
    calling object.  Every object has access to its own
    address through the 'this' pointer.  An object's 'this'
    pointer is not part of the object itself, but is instead
    passed into the object by the compiler as an implicit
    first argument on every non-static member function call
    to the object.  It is very useful (and often necessary)
    when overloading operators.  The 'this' pointer cannot
    have its value changed; it always points to the calling
    object.

   In the sample program below, the 'this' pointer does not
    really serve any useful purpose; it is used simply to
    show one manner in which it can be used.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


class DemoClass
{
   public:
      void DemoFunction();
   private:
      int num;
};


void DemoClass::DemoFunction()
{
   this->num = 17;
   cout << "The value of 'num' is " << num << ".\n\n";
}


int main()
{
   DemoClass object;
   object.DemoFunction();

   return 0;
}