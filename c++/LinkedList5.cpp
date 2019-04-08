// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   In the previous sample program (LinkedList4.cpp), nodes
    were added only to the BEGINNING of the linked list.
    This resulted in the data being displayed numerically
    in reverse order when the contents of the nodes of the
    linked list were displayed.  It is often desirable,
    however, to be able to add nodes to the END of a linked
    list.  To do this, the address of the LAST node in the
    list must be known.  If a pointer is maintained only to
    the FIRST node of the list, though, then the only way to
    find the address of the last node is to traverse the
    entire list, starting from the beginning.

   The program below illustrates a faster way of obtaining
    the address of the last node in a linked list.  In
    addition to maintaining a pointer to the first node in
    the list, a pointer to the last node in the list is also
    kept.  This process is handled through an additional
    structure named 'listType'.

   In many places in this program (in 'main()' and in the
    function headers), instead of referring directly to
    pointer variables in the linked list, the variable 'list'
    is defined as type 'listType' (which is NOT a pointer,
    but is instead the name of the new structure).  This new
    structure, in turn, "defines" the linked list with
    pointers to the first and last nodes of the list.  As a
    result, the nodes of the linked list are not accessed
    directly, but are instead called through the 'first' and
    'last' fields of the 'listType' structure.

   Notice that in the 'DisplayList()' function a temporary
    pointer is created.  This pointer is used to traverse
    the linked list, displaying the data contents of each
    node.  While the process of displaying the data could be
    accomplished without the use of a temporary pointer
    variable by setting 'local.last' equal to 'local.first'
    and then advancing 'local.last' through the linked list,
    it is probably better NOT to change the values of the
    'first' and 'last' pointers unless absolutely necessary.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


struct listNode
{
   int data;                  // Define integer member of 'listNode'
   listNode *next;            // Define pointer member of 'listNode'

   listNode(int, listNode *); // Define prototype for node constructor
};


// Create struct constructor for defining new nodes in linked list
listNode::listNode(int tempData, listNode *tempNext)
   : data(tempData), next(tempNext)
{
}


typedef listNode *nodePtr;    // Define 'nodePtr' as alias for 'listNode*'


struct listType
{
   nodePtr first;             // Define pointer to FIRST node of linked list
   nodePtr last;              // Define pointer to LAST node of linked list
};


void DisplayList(listType local)
// This function displays the contents of the apstring
//  'data' fields of all of the nodes in the linked
//  list.  It knows that it has reached the end of the
//  list when the 'next' field address points to NULL.
{
   nodePtr temp = local.first;  // Start at FRONT of list
   int count = 1;

   while (temp != NULL)
   {
      cout << "Data in Node #" << count++ << ":  " << temp->data << endl;
      temp = temp->next;
   }
}


void CreateList(listType & temp)
// This function creates a linked list of nine
//  nodes, each containing an integer (1 - 9).
{
   // Handle FIRST node in linked list separately
   temp.first = temp.last = new listNode(1, NULL);

   // Create nodes for rest of linked list
   for (int i=2; i<=9; i++)
      temp.last = temp.last->next = new listNode(i, NULL);
}


int main()
{
   listType list;  // Define 'list' as structure of two pointers to linked list

   list.first = list.last = NULL;  // Start linked list with zero nodes

   CreateList(list);
   DisplayList(list);

   cout << endl;
   return 0;
}