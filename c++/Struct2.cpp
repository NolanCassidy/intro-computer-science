// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   This program extends the previous structure sample program
    (Struct1.cpp) by using a doubly-linked list, instead of an
    apvector, to hold the student records.  For a greater
    explanation of linked lists, see the other linked list
    sample programs.

   Like classes, structures can have both constructors and
    initializer lists, as illustrated in the program below.  In
    the 'listNode' structure, the prototype for the constructor
    is contained inside the structure itself, while the actual
    code for the constructor is located outside of the struct
    declaration (using the scope resolution operator).  Also,
    notice how the 'listNode' struct definition is somewhat
    circular.  This is allowed, and is necessary to create a
    linked list using structures as nodes.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <iomanip.h>          // Required for 'setw'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'
#include <apvector.h>         // Required for 'apvector'


const NUMPERIODS = 7;         // Number of class periods per day


// Create record structures to hold student data
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


// Create structure for single node in doubly-linked list
struct listNode
{
   studInfo data;             // Define studInfo member of 'listNode'
   listNode *prev;            // Define BACKWARDS pointer member of 'listNode'
   listNode *next;            // Define FORWARDS pointer member of 'listNode'

   // Define prototype for node constructor for doubly-linked list
   listNode(studInfo, listNode *, listNode *);
};


// Create struct constructor for defining new nodes in doubly-linked list
listNode::listNode(studInfo tempData, listNode *tempPrev, listNode *tempNext)
   : data(tempData), prev(tempPrev), next(tempNext)
{
}


// Define 'nodePtr' as alias for 'listNode*'
typedef listNode* nodePtr;


// Create structure of pointers to beginning and end of doubly-linked list
struct listType
{
   nodePtr first;
   nodePtr last;
};


void DisplayList(listType local)
// This function displays, in order, the contents
//  of the 'data' fields of all of the nodes in the
//  doubly-linked list.  Each 'data' field consists
//  of a record of type studInfo, which includes
//  integers, apstrings, and an apvector.
{
   nodePtr temp = local.first;
   int count = 1;

   cout << "School Database Info in Alphabetical Order (by Last Name):\n\n\n";

   while (temp != NULL)
   {
      cout << "  RECORD #" << count++ << ":" << endl << endl;
      cout << "    Last Name:   " << temp->data.lastName << endl;
      cout << "    First Name:  " << temp->data.firstName << endl;

      cout << "    Birthdate:   "
           << temp->data.dob.month << "-"
           << temp->data.dob.day << "-"
           << temp->data.dob.year << endl;

      cout << "    Phone:       " << temp->data.phone << endl;
      cout << "    Grad. Year:  " << temp->data.gradYear << endl << endl;

      cout << "    PERIOD    COURSE                   TEACHER        ROOM\n";
      cout << "    ------    ------                   -------        ----\n";
      for (int i=1; i<=NUMPERIODS; i++)
      {
         cout << "      "
              << setw(8)  << setiosflags(ios::left) << i
              << setw(25) << temp->data.courses[i].course
              << setw(15) << temp->data.courses[i].teacher
              << setw(20) << temp->data.courses[i].room << endl;
      }

      temp = temp->next;
   }
}


void InsertNode(listType & local, studInfo data)
// This function inserts a new record into the
//  doubly-linked list.  The record is inserted
//  into the list alphabetically based on the
//  'lastName' field of studInfo.
{
   nodePtr temp = local.first;
   
   if (local.first == NULL)
      // List is empty--add first element
      local.first = local.last = new listNode(data, NULL, NULL);
   else if (local.first->data.lastName >= data.lastName)
      // Insert new item at FRONT of list
      local.first->next->prev = local.first = new listNode(data, NULL, local.first);
   else if (local.last->data.lastName < data.lastName)
      // Place new item at END of list
      local.last = local.last->next = new listNode(data, local.last, NULL);
   else
   {
      // General case--insert new item between two nodes
      while (temp->next->data.lastName < data.lastName)  // Look ahead to data in NEXT node
         temp = temp->next;
      temp->next->next->prev = temp->next = new listNode(data, temp, temp->next);
   }
}


int main()
{
   // Define structure of two pointers to doubly-linked list
   listType list;
   list.first = list.last = NULL;

   // Define single student record of school data
   studInfo student;
   student.courses.resize(NUMPERIODS + 1);

   // Enter sample data for single student
   student.lastName = "Ettinger";
   student.firstName = "Evan";

   student.dob.year = 1982;
   student.dob.month = 1;
   student.dob.day = 3;

   student.phone = "555-EVAN";
   student.gradYear = 2000;

   student.courses[1].course = "AP English Lit.";
   student.courses[1].teacher = "Aliano";
   student.courses[1].room = 155;
   student.courses[2].course = "Biomed. Science 8";
   student.courses[2].teacher = "Lovelady";
   student.courses[2].room = 228;
   student.courses[3].course = "AP Physics 8";
   student.courses[3].teacher = "Nash";
   student.courses[3].room = 233;
   student.courses[4].course = "Economics";
   student.courses[4].teacher = "Jaime";
   student.courses[4].room = 287;
   student.courses[5].course = "AP Comp. Prog. 6";
   student.courses[5].teacher = "Goldsmith";
   student.courses[5].room = 279;
   student.courses[6].course = "AP Calc. 10 (BC)";
   student.courses[6].teacher = "Goldman";
   student.courses[6].room = 251;
   student.courses[7].course = "*****";
   student.courses[7].teacher = "*****";
   student.courses[7].room = 0;

   // Insert sample student record into doubly-linked list
   InsertNode(list, student);

   // Display doubly-linked list of single student record
   DisplayList(list);

   cout << endl << endl;
   return 0;
}