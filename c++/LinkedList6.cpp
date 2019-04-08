// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016
/*
   The previous two sample programs (LinkedList4.cpp and
    LinkedList5.cpp) demonstrated how to insert nodes at
    the beginning and end of a linked list.  The program
    below shows how nodes can also be inserted into the
    middle of a linked list.  In addition, linked lists
    are not limited to storing integers, as evidenced by
    the linked list below, which stores apstrings.

   There are four unique cases that must be considered when
    inserting nodes into a linked list.  There is the case
    where the linked list is empty (does not yet contain
    any nodes).  The second case is where the new node is to
    be inserted at the beginning of the linked list (BEFORE
    the first node).  The third case involves a node being
    added to the end of the linked list (AFTER the last node).
    The final case is the general case, where a node is to be
    inserted somewhere in the middle of the linked list.  All
    four of these cases are dealt with in the 'InsertNode()'
    function implemented below, which inserts nodes into the
    linked list alphabetically (based on the node data).
*/
#include <iostream.h>         // Required for 'cin' and 'cout'
#include <apstring.h>         // Required for 'apstring'
#include <apstring.cpp>       // Required for 'apstring'


struct listNode
{
   apstring data;             // Define apstring member of 'listNode'
   listNode *next;            // Define pointer member of 'listNode'

   // Define prototype for node constructor for linked list
   listNode(apstring, listNode *);
};


// Create struct constructor for defining new nodes in linked list
listNode::listNode(apstring tempData, listNode *tempNext)
   : data(tempData), next(tempNext)
{
}


typedef listNode* nodePtr;    // Define 'nodePtr' as alias for 'listNode*'


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


void InsertNode(listType & local, apstring data)
// This function inserts a variable of type apstring
//  ('data') alphabetically into the linked list defined
//  through the structure 'local'.  If the apstring is
//  determined to belong somewhere in the middle of the
//  list (as opposed to belonging at the beginning or the
//  end), a linear pass through the list is used to
//  determine where the new string should be inserted.
{
   nodePtr temp = local.first;
   
   if (local.first == NULL)
      // List is empty--add first element
      local.first = local.last = new listNode(data, NULL);
   else if (local.first->data >= data)
      // Insert new item at FRONT of list
      local.first = new listNode(data, local.first);
   else if (local.last->data < data)
      // Place new item at END of list
      local.last = local.last->next = new listNode(data, NULL);
   else
   {
      // General case--insert new item between two nodes
      while (temp->next->data < data)  // Look ahead to data in NEXT node
         temp = temp->next;
      temp->next = new listNode(data, temp->next);
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

   DisplayList(list);

   cout << endl;
   return 0;
}