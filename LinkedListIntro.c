#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct charNode
{
	char data;
	struct charNode *nxtNode;
};

typedef struct charNode Node;//use a capital letter to indicate it's a synonym

void printList( Node *currentPtr );
void insert( Node **sPtr, char value );
void delete( Node **sPtr, char value );

int main(void) {

   Node* root = (Node*)malloc(sizeof(Node));

   root->data = 'c';
   root->nxtNode = NULL;
   
   insert(&root, 'a');
   insert(&root, 'f');

   printList(root);

   delete(&root, 'a');

   printList(root);

}

/* Print the list */
void printList( Node *currentPtr )
{
   /* if list is empty */
   if ( currentPtr == NULL ) {
      printf( "List is empty.\n\n" );
   } /* end if */
   else {
      printf( "The list is:\n" );

      /* while not the end of the list */
      while ( currentPtr != NULL ) {
         printf( "%c --> ", currentPtr->data );
         currentPtr = currentPtr->nxtNode;
      } /* end while */

      printf( "NULL\n\n" );
   } /* end else */
} /* end function printList */

/*
//Insert w/o maintaining sort order
void insert( Node **sPtr, char value )
{
   Node *newPtr; // pointer to new node
   Node *previousPtr; // pointer to previous node in list
   Node *currentPtr; // pointer to current node in list

   newPtr = (Node*)malloc(sizeof( Node )); // create node

   if ( newPtr != NULL ) { // is space available
      newPtr->data = value; // place value in node
      newPtr->nxtNode = NULL; // node does not link to another node

      previousPtr = NULL;
      currentPtr = *sPtr;//Begin at the root!

      while ( currentPtr != NULL ) {
         previousPtr = currentPtr; // walk to ...
         currentPtr = currentPtr->nxtNode; // ... next node
      } // end while

      previousPtr->nxtNode = newPtr;

   } // end if
   else {
      printf( "%c not inserted. No memory available.\n", value );
   } // end else
} // end function insert
*/

//Insert w/ sort order
void insert( Node **sPtr, char value ) {
   Node *newPtr; // pointer to new node
   Node *previousPtr; // pointer to previous node in list
   Node *currentPtr; // pointer to current node in list

   newPtr = (Node*)malloc(sizeof( Node )); // create node

   if ( newPtr != NULL ) { // is space available
      newPtr->data = value; // place value in node
      newPtr->nxtNode = NULL; // node does not link to another node

      previousPtr = NULL;
      currentPtr = *sPtr;//Begin at the root!

      // loop to find the correct location in the list
      while ( currentPtr != NULL && value > currentPtr->data ) {
         previousPtr = currentPtr; // walk to ...
         currentPtr = currentPtr->nxtNode; // ... next node
      } // end while

      //insert new node
		if( previousPtr == NULL ) {
			newPtr->nxtNode = *sPtr;
			*sPtr = newPtr;
		//Otherwise, insert the node between previousPtr and currentPtr
		} else {
			//newPtr->nxtNode = previousPtr->nxtNode;//the same
			newPtr->nxtNode = currentPtr;
			previousPtr->nxtNode = newPtr;
		}
	} // end if
   	else {
      printf( "%c not inserted. No memory available.\n", value );
   } // end else
} // end function insert


// Delete a list element
void delete( Node **sPtr, char value ) {
   Node* previousPtr; // pointer to previous node in list
   Node* currentPtr; // pointer to current node in list
   Node* tempPtr; // temporary node pointer

   // delete first node
   if ( value == ( *sPtr )->data ) {
      tempPtr = *sPtr; // hold onto node being removed
      *sPtr = ( *sPtr )->nxtNode; // de-thread the node
      free( tempPtr ); // free the de-threaded node
      printf("%c -- Removed!", value);
   } else {
      previousPtr = *sPtr;
      currentPtr = ( *sPtr )->nxtNode;

      // loop to find the correct location in the list
      while ( currentPtr != NULL && currentPtr->data != value ) {
         previousPtr = currentPtr; // walk to ...
         currentPtr = currentPtr->nxtNode; // ... next node
      } // end while

      // delete node at currentPtr
      if ( currentPtr != NULL ) {

         tempPtr = currentPtr;
         previousPtr->nxtNode = currentPtr->nxtNode;
         free( tempPtr );
         printf("%c -- Removed!", value);
      } // end if
   } // end else
   puts("");
} // end function delete
