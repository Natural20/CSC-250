/* Introduction to Pointers */
#include <stdlib.h>
#include <stdio.h>

/* For Practice - Create a program that will do the following:

1 - declare two int variables
2 - declare two int pointers
3 - Set each pointer to a variable, don’t assign the same variable to both pointers
4 - Print the memory address for each variable
5 - Print the value of each pointer
6 - Dereference each pointer and print the value
7 - do it again, but use a different data type

*/

//Main Function
int main(void)
{
	//1
	int integer1 = 7;
	int integer2 = 99;

	//2
	int *firstPtr = NULL;
	int *secondPtr = NULL;

	//3
	firstPtr = &integer1;
	secondPtr = &integer2;

	//4
	printf("Memory address of integer1 is: %p\n", &integer1);
	printf("Memory address of integer2 is: %p\n", &integer2);

	//5 - Remember, the value of a pointer is a memory address!
	printf("Value of firstPtr is: %p\n", firstPtr);
	printf("Value of secondPtr is: %p\n", secondPtr);

	//6
	printf("The dereferenced value of firstPtr: %d\n", *firstPtr);
	printf("The dereferenced value of secondPtr: %d\n", *secondPtr);

}//end main