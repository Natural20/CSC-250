#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{

	//POINTER ARITHMETIC -- ONLY ON ARRAY ELEMENTS
	int array1[5] = {1,2,3,4,5};
	int *aPtr = &array1[0];

	size_t i;

	for(i=0; i<5; i++)
	{
		printf("The memory address: %p\t value is: %d\n",aPtr, *aPtr);
		//aPtr++; //HOW DOES THIS WORK? Memory Address + (number * it's byte value)
		//Memory is reserved in 4-byte blocks

		//aPtr += 2;//What's the result?
		aPtr += 4;//What's the result?
	}
	/*
	int array[20];

	printf("sizeof int array[20]\t%li bytes\n", sizeof(array));

	//POINTER ARITHMETIC -- ONLY ON ARRAY ELEMENTS

	int array1[5] = {1,2,3,4,5};
	int *aPtr = &array1[0];

	size_t i;

	for(i=0; i<5; i++)
	{
		printf("The memory address: %p\t value is: %d\n",aPtr, *aPtr);
		//aPtr++; //HOW DOES THIS WORK? Memory Address + (number * it's byte value)
		//Memory is reserved in 4-byte blocks
		// aPtr = 1 * 4

		//aPtr += 2;//What's the result?
		//aPtr += 4;//What's the result?
	}
*/


}