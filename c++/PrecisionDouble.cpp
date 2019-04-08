// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the maximum degree of precision
    available for variables of type 'double'.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setprecision'
#include <math.h>             // Required for 'sqrt'


int main()
{
   int num = 14;
   double answer;

   answer = sqrt(num);

   cout << "Default Precision:  " << answer << endl << endl;

   cout << setprecision(1) << "Precision 1:   " << answer << "\n";
   cout << setprecision(2) << "Precision 2:   " << answer << "\n";
   cout << setprecision(3) << "Precision 3:   " << answer << "\n";
   cout << setprecision(4) << "Precision 4:   " << answer << "\n";
   cout << setprecision(5) << "Precision 5:   " << answer << "\n";
   cout << setprecision(6) << "Precision 6:   " << answer << "\n";
   cout << setprecision(7) << "Precision 7:   " << answer << "\n";
   cout << setprecision(8) << "Precision 8:   " << answer << "\n";
   cout << setprecision(9) << "Precision 9:   " << answer << "\n";
   cout << setprecision(10) << "Precision 10:  " << answer << "\n";
   cout << setprecision(11) << "Precision 11:  " << answer << "\n";
   cout << setprecision(12) << "Precision 12:  " << answer << "\n";
   cout << setprecision(13) << "Precision 13:  " << answer << "\n";
   cout << setprecision(14) << "Precision 14:  " << answer << "\n";
   cout << setprecision(15) << "Precision 15:  " << answer << "\n";
   cout << setprecision(16) << "Precision 16:  " << answer << "\n\n";

   return 0;
}