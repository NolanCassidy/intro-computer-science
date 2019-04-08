// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   Functionally, this program is identical to the previous
    sample program (LinkedList1.cpp).  There are two internal
    changes, though, and these changes are described below.

   C++ provides nicer alternatives to some of the syntax
    described in the previous example.  The member selection
    operator (->) accomplishes the same result of using the
    indirection operator (*) in conjunction with the dot
    operator.  For example, the statement 'list->data = 5' is
    identical to the statement '(*list).data = 5'.  The
    member selection operator is created with a hyphen (-)
    and a greater than sign (>).

   Another improvement is the use of the 'typedef' statement
    (described in the sample program Typedef.cpp).  In the
    example below, the identifier 'nodePtr' becomes an alias
    for 'listNode*'.  This allows the statement
    'listNode *list' to be replaced with 'nodePtr list', and
    that makes the variable 'list' of type nodePtr, which
    is really just an alias type for listNode*.  Essentially,
    what these two changes have done is allowed you to not
    have to use the asterisk (*) throughout your program.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


struct listNode
{
   int data;                  // Define integer member of 'listNode'
   listNode *next;            // Define pointer member of 'listNode'
};


typedef listNode *nodePtr;    // Define 'nodePtr' as alias for 'listNode*'


int main()
{
   nodePtr list;

   list = new listNode;

   list->data = 5;
   list->next = NULL;

   cout << "Data value of the (single) node in the list:  " << list->data << endl;
   cout << "Address of the next node in the linked list:  " << list->next << endl;

   cout << endl;
   return 0;
}