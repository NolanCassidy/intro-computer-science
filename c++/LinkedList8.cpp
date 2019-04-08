// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016

/*
   The previous sample programs have shown how to insert and
    display nodes in a linked list.  Of equal importance is
    the ability to delete nodes from a linked list.  As is
    the case when inserting nodes, there are a number of
    unique cases that must be considered when removing nodes
    from a linked list.  There is the case where the linked
    list contains no nodes, as well as the case where the list
    contains only one node.  There is the case where the node
    to be removed is the FIRST node in the list (of multiple
    nodes), as well as the case where the node to be removed
    is the LAST node in the list.  Finally, there is the
    general case where the node to be removed is somewhere in
    the middle of the list.

   It is very important to remember to actually delete a node
    after removing the pointers to it.  Removing a node from
    a linked list involves redirecting all of the pointers
    that point to the node to be deleted, and then actually
    deleting the node.  Deleting a node frees up that memory
    location so that it can be used again.  The freed memory
    is placed at the top of the computer's memory "stack" so
    that it will be the first memory location used when a 'new'
    statement is issued for a new node.  Not deleting nodes
    will probably not cause a program to stop functioning,
    but it will create a situation where more and more memory
    may be used up without any memory being freed up for
    future use.  This is sometimes known as a memory leak and
    is very poor programming style.

   The 'DeleteNode()' function implemented below takes, as one
    of its input parameters, an apstring that represents the
    data in the node to be removed.  The function then looks
    for a node containing that data, and then removes that
    node.  If more than one node contains the given apstring,
    the FIRST node with that string is the only node that is
    removed.  The function returns a boolean value, so if no
    nodes contain the supplied data, a value of 'false' is
    returned; otherwise, 'true' is returned.  This returning of
    a boolean value gives the programmer a way of knowing if the
    deletion was successful.  Whereas failure is not an option
    when inserting a node, it is a possibility when trying to
    remove a node based on a supplied data value that may or may
    not exist in the linked list.

   There may be cases where, instead of a data value, a node
    number (e.g., node #15 in the list) is supplied to indicate
    which node is to be removed.  If this is the case, a loop
    must be used to traverse the linked list to find the address
    of the node with the specified number.  Whether a node number
    or a data value is supplied, it will usually be necessary to
    search through the linked list to find the ADDRESS of the
    node to be removed.  Since pointers point to ADDRESSES, until
    an address is found, no pointers in the linked list can be
    rearranged (unless, of course, the node to be removed is at
    the beginning or end of the linked list).

   NOTE:  This program is implemented using a SINGLY-LINKED list.
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


bool DeleteNode(listType & local, apstring data)
// This function finds the node in the linked list that
//  has the contents of the apstring variable 'data' in
//  the 'data' field of the node.  It will return 'true'
//  if the deletion is successful or 'false' if it is not.
{
   nodePtr temp = local.first, marker;

   if (local.first == NULL)
      // NO nodes in list to delete
      return false;
   else
   {
      if (local.first->data == data)
      {
         // FIRST node contains data to be deleted
         marker = local.first;  // Mark node to be deleted

         if (local.first == local.last)
            // Only ONE node in list
            local.first = local.last = NULL;
         else
            local.first = local.first->next;  // Move 'local.first' forward one pointer
         delete marker;  // Delete first node
         return true;
      }
      else  // General case
      {
         while ((temp->next != NULL) && (temp->next->data != data))
            temp = temp->next;

         if (temp->next == NULL)
            // Data NOT found in list
            return false;
         else
         {
            // Data has been found in 'next' node (temp->next)
            marker = temp->next;  // Mark node to be deleted
            temp->next = temp->next->next;  // Have pointer bypass marked node

            if (local.last == marker)
               // LAST node contains data to be deleted
               local.last = temp;  // Move 'local.last' back one pointer
            delete marker;  // Delete 'marked' node
            return true;
         }
      }
   }
}


void DisplayList(listType local)
// This function displays the contents of the apstring
//  'data' fields of all of the nodes in the linked
//  list.  It knows that it has reached the end of the
//  list when the 'next' field address points to NULL.
{
   if (local.first == NULL)
      cout << "  No data in linked list to display\n";

   nodePtr temp = local.first;  // Start at FRONT of list
   int count = 1;

   while (temp != NULL)
   {
      cout << "  Node Data #" << count++ << ":  " << temp->data << endl;
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
   bool success;

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

   success = DeleteNode(list, "dog");
   success = DeleteNode(list, "fish");
   success = DeleteNode(list, "ant");
   success = DeleteNode(list, "bee");

   cout << "\n\nNode Data in Alphabetical Order:\n";
   DisplayList(list);

   cout << endl;
   return 0;
}