#include "llrec.h"
#include <cstddef>
/* If you needed a helper function, write it here */

//*********************************************
// Provide your implementation of llpivot below
//*********************************************
void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot)
{
  //making sure list is valid
  if(head == nullptr){
    smaller = nullptr;
    larger = nullptr;
    return;
  }
  //checking if the value is greater than pivot
  if(head -> val > pivot)
  {
    Node* temporary = head -> next;
    larger = head;
    head = NULL;
    llpivot(temporary, smaller, larger -> next, pivot);
      
  }
  //checking if value is less than pivot
  else if(head -> val <= pivot)
  {
    Node* temporary = head -> next;
    smaller = head;
    head = NULL;
    llpivot(temporary, smaller -> next, larger, pivot);
  }
  
}

