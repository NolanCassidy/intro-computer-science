// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   With the previous sample program (LinkedList6.cpp),
    displaying the data contents of the linked nodes in
    REVERSE order would require either traversing the list
    multiple times or using a recursive algorithm.  This
    is because a regular linked list is designed to be
    traversed in a forward direction only.  Each node
    contains a pointer to only the NEXT node in the list.

   The program below illustrates the design and use of a
    DOUBLY-LINKED list.  Each node in a doubly-linked list
    contains data and TWO sets of pointers:  one to the next
    node and one to the PREVIOUS node in the list.  These
    additional pointers allow doubly-linked lists to be
    traversed both forwards and backwards.  Notice the
    changes to the 'listNode' structure and constructor.
    The function 'InsertNode()' has also been modified, as
    every call to 'listNode()' now requires an extra pointer
    hookup.  The function 'main()', though, is essentially
    unchanged, as is 'DisplayList()' and the structure
    'listType'.

   Note that, with a doubly-linked list, just as the NEXT
    pointer of the LAST node points to NULL, the PREVIOUS
    pointer of the FIRST node also points to NULL.  While
    the doubly-linked list used below has an official
    beginning and an official end, in a sense the list can
    be thought of as having TWO ends, each one terminated
    with a NULL.

   An additional function, 'DisplayReverseList()', has been
    added to show how a doubly-linked list can be easily
    traversed backwards.  However, the node numbers are NOT
    displayed since it is not known in advance how many nodes
    are in a linked (or doubly-linked) list.  Although not
    done in this program, it might be useful to always keep
    track of how many nodes are in the doubly-linked list.
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


struct listNode
{
   apstring data;             // Define apstring member of 'listNode'
   listNode *prev;            // Define BACKWARD pointer member of 'listNode'
   listNode *next;            // Define FORWARD pointer member of 'listNode'

   // Define prototype for node constructor for doubly-linked list
   listNode(apstring, listNode *, listNode *);
};


// Create struct constructor for defining new nodes in doubly-linked list
listNode::listNode(apstring tempData, listNode *tempPrev, listNode *tempNext)
   : data(tempData), prev(tempPrev), next(tempNext)
{
}


typedef listNode* nodePtr;    // Define 'nodePtr' as alias for 'listNode*'


struct listType
{
   nodePtr first;             // Define pointer to FIRST node of linked list
   nodePtr last;              // Define pointer to LAST node of linked list
};


void DisplayReverseList(listType local)
// This function displays, in reverse order, the contents
//  of the apstring 'data' fields of all of the nodes in
//  the doubly-linked list.  It knows that it has reached
//  the beginning of the list when the 'prev' field address
//  points to NULL.
{
   nodePtr temp = local.last;  // Start at END of list
   int count = 1;

   while (temp != NULL)
   {
      cout << "  Data in Node:  " << temp->data << endl;
      temp = temp->prev;
   }
}


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
      cout << "  Data in Node #" << count++ << ":  " << temp->data << endl;
      temp = temp->next;
   }
}


void InsertNode(listType & local, apstring data)
// This function inserts a variable of type apstring
//  ('data') alphabetically into the doubly-linked list
//  defined through the structure 'local'.  If the apstring
//  is determined to belong somewhere in the middle of the
//  list (as opposed to belonging at the beginning or the
//  end), a linear pass through the list is used to
//  determine where the new string should be inserted.
{
   nodePtr temp = local.first;
   
   if (local.first == NULL)
      // List is empty--add first element
      local.first = local.last = new listNode(data, NULL, NULL);
   else if (local.first->data >= data)
      // Insert new item at FRONT of list
      local.first->next->prev = local.first = new listNode(data, NULL, local.first);
   else if (local.last->data < data)
      // Place new item at END of list
      local.last = local.last->next = new listNode(data, local.last, NULL);
   else
   {
      // General case--insert new item between two nodes
      while (temp->next->data < data)  // Look ahead to data in NEXT node
         temp = temp->next;
      temp->next->next->prev = temp->next = new listNode(data, temp, temp->next);
   }
}


int main()
{
   listType list;  // Define 'list' as structure of two pointers to linked list
   list.first = list.last = NULL;  // Start linked list with zero nodes

   InsertNode(list, "dog");
   InsertNode(list, "cat");
   InsertNode(list, "fish");
   InsertNode(list, "ant");
   InsertNode(list, "elephant");
   InsertNode(list, "bear");
   InsertNode(list, "dog");
   InsertNode(list, "ant");
   InsertNode(list, "fish");

   cout << "Node Data in Alphabetical Order:\n";
   DisplayList(list);

   cout << "\n\nNode Data in REVERSE Alphabetical Order:\n";
   DisplayReverseList(list);

   cout << endl;
   return 0;
}