// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program demonstrates how structures ('struct') can be
    used to group together related pieces of data.  Vectors
    and matrices can serve that purpose if all the data are of
    the same type.  Structures can be used to create a new
    'type' that encompasses variables of different types.

   Structures are nearly identical to classes (see the class
    sample programs), with the exception that all of the data
    in a structure is public--none of it is private.  With
    structures it is possible to have uninitialized data, as
    well as data that have not been initialized properly.  This
    is because users have direct access to the data in a
    structure, which means that invalid values can be assigned
    to the members of a structure if one is not careful.

   Three structures are set up below.  They simulate a school
    database of student information.  Notice that a structure
    can contain another structure.  Note, also, that a semicolon
    must be placed after the closing brace of each structure.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'
#include <apvector.h>         // Required for 'apvector'


const NUMPERIODS = 7;         // Number of class periods per day


struct dateType
{
   int year;
   int month;
   int day;
};

struct courseType
{
   apstring course;
   apstring teacher;
   int room;
};

struct studInfo
{
   apstring lastName;
   apstring firstName;
   dateType dob;
   apstring phone;
   int gradYear;
   apvector<courseType> courses;
};


int main()
{
   // Initialize variables
   int i;  //  Dummy variable
   int numStudents = 30;  // Allow up to 30 students
   apvector<studInfo> students(numStudents + 1);

   for (i=0; i<=numStudents; i++)
      students[i].courses.resize(NUMPERIODS + 1);

   // Enter data for Student #17
   students[17].lastName = "Ettinger";
   students[17].firstName = "Evan";

   students[17].dob.year = 1982;
   students[17].dob.month = 1;
   students[17].dob.day = 3;

   students[17].phone = "555-EVAN";
   students[17].gradYear = 2000;

   students[17].courses[1].course = "AP English Lit.";
   students[17].courses[1].teacher = "Aliano";
   students[17].courses[1].room = 155;
   students[17].courses[2].course = "Biomed. Science 8";
   students[17].courses[2].teacher = "Lovelady";
   students[17].courses[2].room = 228;
   students[17].courses[3].course = "AP Physics 8";
   students[17].courses[3].teacher = "Nash";
   students[17].courses[3].room = 233;
   students[17].courses[4].course = "Economics";
   students[17].courses[4].teacher = "Jaime";
   students[17].courses[4].room = 287;
   students[17].courses[5].course = "AP Comp. Prog. 6";
   students[17].courses[5].teacher = "Goldsmith";
   students[17].courses[5].room = 279;
   students[17].courses[6].course = "AP Calc. 10 (BC)";
   students[17].courses[6].teacher = "Goldman";
   students[17].courses[6].room = 251;
   students[17].courses[7].course = "*****";
   students[17].courses[7].teacher = "*****";
   students[17].courses[7].room = 0;

   // Display data for Student #17
   cout << "Last Name:   " << students[17].lastName << endl;
   cout << "First Name:  " << students[17].firstName << endl;

   cout << "Birthdate:   "
        << students[17].dob.month << "-"
        << students[17].dob.day << "-"
        << students[17].dob.year << endl;

   cout << "Phone:       " << students[17].phone << endl;
   cout << "Grad. Year:  " << students[17].gradYear << endl << endl;

   cout << "PERIOD    COURSE                   TEACHER        ROOM\n";
   cout << "------    ------                   -------        ----\n";
   for (i=1; i<=NUMPERIODS; i++)
   {
      cout << setw(10)  << setiosflags(ios::left) << i
           << setw(25) << students[17].courses[i].course
           << setw(15) << students[17].courses[i].teacher
           << setw(20) << students[17].courses[i].room << endl;
   }

   cout << endl;
   return 0;
}