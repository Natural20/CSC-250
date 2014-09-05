/* Introduction to Pointers */
#include <stdlib.h>
#include <stdio.h>

//Main Function
int main(void)
{

	//printf("The value is: %d\n", integer1);

	//printf("The memory address is: %p\n", &integer1);

	//Defining pointers

	//int *intPtr, integer2;

	//Defining and Initializing
	//int *secondPtr = NULL; //or use 0

	//printf("The value is: %p\n", secondPtr);

	//assigning a value to a pointer

	//printf("The memory address of integer1 is: %p\n", &integer1);
	//printf("The value of firstPtr is: %p\n", firstPtr);
	//printf("The memory address of firstPtr is: %p\n", &firstPtr);

	//how to dereference a pointer
	int integer1 = 7;

	printf("integer1: %p\n", &integer1);

	int *firstPtr = &integer1;

	printf("ptr: %p\n", &firstPtr);
	printf("The value of pointer: %p\n", firstPtr);

	printf("The dereferenced value of firstPtr is %d\n", *firstPtr);
	/*
	//printf("The square is: %d\n", (*firstPtr * *firstPtr));

	integer1 = 98;

	*firstPtr = 99999;

	printf("The value is: %d\n", integer1);
	printf("The dereferenced value of firstPtr is %d\n", *firstPtr);*/

	/**/
}//end main
