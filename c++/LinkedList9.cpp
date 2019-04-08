// Nolan Cassidy
// Redwood High School
// C++ Computer Programming
// 6/13/2016

/*
   This sample program is the same as the previous one
    (LinkedList8.cpp) with the exception that this program
    implements the 'DeleteNode()' function with a DOUBLY-
    LINKED list.  Because each node in a doubly-linked
    list has a pointer to the previous node in the list,
    many of the node removal cases will require an extra
    pointer adjustment.
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
      if (local.first->data == data)
      {
         // FIRST node contains data to be deleted
         marker = local.first;  // Mark first node to be deleted

         if (local.first == local.last)
            // Only ONE node in list
            local.first = local.last = NULL;
         else
         {
            local.first = local.first->next;  // Move 'local.first' forward one pointer
            local.first->prev = NULL;  // Set 'prev' pointer of new first node to NULL
         }
      }
      else
         if (local.last->data == data)
         {
            // LAST node contains data to be deleted
            marker = local.last;  // Mark last node to be deleted

            local.last = local.last->prev; // Move 'local.last' back one pointer
            local.last->next = NULL;  // Set 'next' pointer of new last node to NULL
         }
         else  // General case
         {
            while ((temp != NULL) && (temp->data != data))
               temp = temp->next;

            if (temp == NULL)
               // Data NOT found in list
               return false;
            else
            {
               // Data has been found in 'temp'
               marker = temp;  // Mark node to be deleted

               temp->prev->next = temp->next;  // Have 'prev' node bypass marked node
               temp->next->prev = temp->prev;  // Have 'next' node bypass marked node
            }
         }

   delete marker;  // Delete 'marked' node
   return true;
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
