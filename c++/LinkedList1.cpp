// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   A single pointer variable by itself is rather useless.
    This program demonstrates a very basic self-referencing
    data structure, which will allow you to create a data
    structure of linked pointer variables (a linked list).
    In the example below, notice how the structure
    declaration 'listNode' is somewhat circular.  Each
    instance of 'listNode' will be a node in a future linked
    list of nodes.  A listNode contains two data members:
    an integer ('data') and a pointer ('next').  The pointer
    variable 'next' should point to the next listNode in a
    linked list.  In this example, though, the linked list
    really just consists of a single node for which the data
    value is 5.

   Note the parentheses below ( (*list).data = 5 ).  The
    variable 'list' is a pointer variable, and the expression
    (*list) dereferences 'list' so that you can work with the
    memory location stored in 'list'.  The dot notation
    (.data) allows you to work with the value 'data' inside
    of the location pointed to by 'list'.  The parentheses
    are needed because the dot operator has priority over the
    dereferencing operator.  If you omit the parentheses, the
    expression '*list.data' would attempt to dereference
    'list.data', which is not a pointer but simply an integer
    value.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


struct listNode
{
   int data;                  // Define integer member of 'listNode'
   listNode *next;            // Define pointer member of 'listNode'
};


int main()
{
   listNode *list;

   list = new listNode;

   (*list).data = 5;
   (*list).next = NULL;

   cout << "Data value of the (single) node in the list:  " << (*list).data << endl;
   cout << "Address of the next node in the linked list:  " << (*list).next << endl;

   cout << endl;
   return 0;
}