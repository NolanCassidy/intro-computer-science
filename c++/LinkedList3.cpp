// Nolan Cassidy
// C++ Computer Programming
// 6/13/2016
/*
   The previous two sample programs (LinkedList1.cpp and
    LinkedList2.cpp) created a pointer ('list') which
    points to a single structure.  The 'next' field inside
    of the node does not point anywhere (it points to NULL).
    However, by using the 'next' field to link the nodes
    together, you will have a data structure called a linked
    list.

   The purpose of this program is to create a linked list of
    nine nodes.  Each node will contain an integer data value
    and a pointer variable containing the address of the next
    node in the linked list.  In any linked list, the address
    of the FIRST node must always be available to the program.
    If this address is "lost," there will be no way to "find"
    the linked list or any of its data members.  Since each
    node in the list points to the next node, only the address
    of the first node needs to be stored.  Sometimes, though,
    it is useful to also store the address of the LAST node in
    the list.  That is not the case in this program, though.

   Note that the LAST node in any linked list MUST point to
    NULL.  This is how a linked list is terminated, since the
    last node in a linked list does not have a 'next' node
    to point to.  Having a linked list in which the last node
    does not point to NULL can result in unpredictable (and,
    usually, inaccurate) program results and/or output.  If
    a new node is added to the END of a linked list, always
    make sure the new node points to NULL (and the former
    last node points to the new node, of course).
*/
#include <iostream.h>         // Required for 'cin' and 'cout'


struct listNode
{
   int data;                  // Define integer member of 'listNode'
   listNode *next;            // Define pointer member of 'listNode'
};


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


void InsertNode(nodePtr & root, int value)
// This function creates a new node and adds it
//  to the beginning of the linked list.  The
//  'data' field of the new node is assigned the
//  integer that was passed to this function
//  ('value').  The 'next' field of the new node
//  is assigned the address of the current (first)
//  node ('root'), right before root is given the
//  address of the new node.  The last two lines
//  of this function, in effect, "rehook" the
//  pointers to insert the new node into the
//  linked list.
{
   nodePtr newNode;           // Create (temporary) listNode* 'newNode'

   newNode = new listNode;    // Allocate memory for 'newNode'
   newNode->data = value;     // Assign integer 'value' to 'data' field of 'newNode'
   newNode->next = root;      // Assign address of first node to 'next' field of 'newNode'
   root = newNode;            // Update value of 'root' to address of 'newNode'
}


void CreateList(nodePtr & root)
// This function creates a linked list of nine
//  nodes, each containing an integer (1 - 9).
{
   root = NULL;  // Linked list starts off empty (no nodes), so
                 //  root of list starts off pointing nowhere

   for (int i=1; i<=9; i++)
      InsertNode(root, i);
}


int main()
{
   nodePtr first;

   CreateList(first);
   DisplayList(first);

   cout << endl;
   return 0;
}