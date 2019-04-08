// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of the function
     'itoa()' to convert an integer into a string:
   char *  itoa ( int value, char * str, int base );
*/
#include <iostream>
#include <string>

using namespace std;


void main()
{
   int num1 = 582;
   int num2 = 37;
   string convertNum1, convertNum2;
   char result[9];

   // Add num1 and num2 as integers
   cout << "Addition (as integers):  " << num1 + num2 << endl << endl;

   // Convert num1 and num2 to strings and add
   convertNum1 = itoa(num1, result, 10);
   convertNum2 = itoa(num2, result, 10);
   cout << "Addition (as strings):   " << convertNum1 + convertNum2;

   cout << endl << endl;
}
