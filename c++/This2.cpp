// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This sample program illustrates how the 'this' pointer
    can be used to "link" several class member function
    calls together.  This is possible by having the
    statement 'return *this' as the last line of each
    member function.

   In the class 'DemoClassA' below, the member functions are
    defined to have no values returned.  As a result, in
    'main()' the two functions have to be referenced on
    separate lines.  In the class 'DemoClassB', because the
    member functions have return types of the class objects,
    the member function calls can be strung together as shown.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


class DemoClassA
{
   public:
      void DemoFunction1();
      void DemoFunction2();
};

void DemoClassA::DemoFunction1()
{
   cout << "Hello, world, ";
}

void DemoClassA::DemoFunction2()
{
   cout << "from the 'A' class!\n\n";
}


class DemoClassB
{
   public:
      DemoClassB DemoFunction1();
      DemoClassB DemoFunction2();
};

DemoClassB DemoClassB::DemoFunction1()
{
   cout << "Hello, world, ";
   return *this;
}

DemoClassB DemoClassB::DemoFunction2()
{
   cout << "from the 'B' class!\n\n";
   return *this;
}


int main()
{
   DemoClassA objectA;
   objectA.DemoFunction1();
   objectA.DemoFunction2();

   DemoClassB objectB;
   objectB.DemoFunction1().DemoFunction2();

   return 0;
}