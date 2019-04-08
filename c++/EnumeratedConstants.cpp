// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates the use of enumerated constants.
    Since 'MONDAY' is given the value of '1', 'TUESDAY'
    through 'SUNDAY' are automatically assigned the values
    2 through 7 respectively.  If not assigned a value, the
    first enumerated constant will have a value of zero.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


int main()
{
	enum Days {MONDAY=1, TUESDAY, WEDNESDAY, THURSDAY,
	           FRIDAY, SATURDAY, SUNDAY};

	cout << MONDAY << endl;
	cout << TUESDAY << endl;
	cout << WEDNESDAY << endl;
	cout << THURSDAY << endl;
	cout << FRIDAY << endl;
	cout << SATURDAY << endl;
	cout << SUNDAY << endl << endl;

	Days weekDays;

	weekDays = THURSDAY;
	cout << weekDays << endl << endl;

	if (weekDays == 4)
		cout << "It's Thursday!" << endl << endl;

   return 0;
}