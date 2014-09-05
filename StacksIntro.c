#include <stdio.h>
#include <stdlib.h>

//self-referential structure
struct stackNode {
   int data;
   struct stackNode *nextNode;
};

typedef struct stackNode StackNode; /* synonym for struct stackNode */
typedef StackNode *StackNodePtr; /* synonym for StackNode* */

// prototypes
void push( StackNodePtr *topPtr, int info );
int pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );
void printStack( StackNodePtr currentPtr );
void instructions( void );

int main( void )
{
   StackNodePtr stackPtr = NULL; // points to stack top
   int choice; // user's menu choice
   int value; // int input by user

   instructions(); /* display the menu */
   printf( "? " );
   scanf( "%d", &choice );

   /* while user does not enter 3 */
   while ( choice != 3 ) {

      switch ( choice ) {
         /* push value onto stack */
         case 1:
            printf( "Enter an integer: " );
            scanf( "%d", &value );
            push( &stackPtr, value );
            printStack( stackPtr );
            break;
         /* pop value off stack */
         case 2:
            /* if stack is not empty */
            if ( !isEmpty( stackPtr ) ) {
               printf( "The popped value is %d.\n", pop( &stackPtr ) );
            }

            printStack( stackPtr );
            break;
         default:
            printf( "Invalid choice.\n\n" );
            break;
      } /* end switch */

      instructions();
      printf( "? " );
      scanf( "%d", &choice );
   } /* end while */

   printf( "End of run.\n" );
   return 0;
}

/* Print the stack */
void printStack( StackNodePtr currentPtr )
{
   /* if stack is empty */
   if ( currentPtr == NULL ) {
      printf( "The stack is empty.\n\n" );
   } /* end if */
   else {
      printf( "The stack is:\n" );

      /* while not the end of the stack */
      while ( currentPtr != NULL ) {
         printf( "%d --> ", currentPtr->data );
         currentPtr = currentPtr->nextNode;
      } /* end while */

      printf( "NULL\n\n" );
   }
}

//Insert a node at the stack top
void push( StackNodePtr *topPtr, int info )
{
   StackNodePtr newPtr = malloc(sizeof(StackNode));

   //insert the node at stack top
   if ( newPtr != NULL ) {
      newPtr->data = info;
      newPtr->nextNode = *topPtr;
      *topPtr = newPtr;
   }
   else {
      printf( "%d not inserted. No memory available.\n", info );
   }
}

/* Return 1 if the stack is empty, 0 otherwise */
int isEmpty( StackNodePtr topPtr )
{
   return topPtr == NULL;
}

//display program instructions to user
void instructions( void )
{
   printf( "Enter choice:\n"
      "1 to push a value on the stack\n"
      "2 to pop a value off the stack\n"
      "3 to end program\n" );
}

/* Remove a node from the stack top */
int pop( StackNodePtr *topPtr )
{
   StackNodePtr tempPtr; /* temporary node pointer */
   int popValue; /* node value */

   tempPtr = *topPtr;
   popValue = ( *topPtr )->data;
   *topPtr = ( *topPtr )->nextNode;
   free( tempPtr );
   return popValue;
} /* end function pop */