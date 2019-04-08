// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   Functionally, this program is identical to the previous
    sample program (LinkedList3.cpp).  There are several
    internal changes, though, and these changes are
    described below.

   C++ provides for struct constructors which can shorten
    the code in dynamic data structure programs.  As seen
    in the example below, the struct constructor interface
    is written inside of the struct declaration area, while
    the actual code for the constructor is placed outside
    of the struct declaration (using the scope resolution
    operator).

   The name of the struct constructor must match the
    identifier which names the struct ('listNode').  The
    parameters 'tempData' and 'tempNext' will be assigned
    to the fields of each newly constructed node.  Notice
    that an initializer list is used instead of direct
    assignment statements.  Also notice that the
    'InsertNode()' function is no longer needed and the
    'CreateList()' function uses the struct constructor.
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


void DisplayList(nodePtr temp)
// This function displays the contents of the integer
//  'data' fields of all of the nodes in the linked
//  list.  It knows that it has reached the end of the
//  list when the 'next' field address points to NULL.
{
   int count = 1;

   while (temp != NULL)
   {
      cout << "Data in Node #" << count++ << ":  " << temp->data << endl;
      temp = temp->next;
   }
}


void CreateList(nodePtr & root)
// This function creates a linked list of nine
//  nodes, each containing an integer (1 - 9).
{
   root = NULL;

   for (int i=1; i<=9; i++)
      root = new listNode(i, root);
}


int main()
{
   nodePtr first;

   CreateList(first);
   DisplayList(first);

   cout << endl;
   return 0;
}