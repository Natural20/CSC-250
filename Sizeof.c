#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	/*printf("sizeof INT:\t%li bytes\n", sizeof(int));
	printf("sizeof FLOAT:\t%li bytes\n", sizeof(float));
	printf("sizeof DOUBLE:\t%li bytes\n", sizeof(double));
	printf("sizeof CHAR:\t%li byte\n", sizeof(char));

	//What's the size of this variable?
	int i = 9999999;

	printf("Size of i:\t%li\n", sizeof(i));//yep, still 4-bytes
	*/
	//The void pointer
	/*void *aPtr = {0};
	//int *iPtr = {0};

	int a = 44;
	char b = 'f';
	//int array1[40] = {0};

	aPtr = &a;*/
	//aPtr = &b;
	//aPtr = array1;
	//iPtr = &b;

	//printf("The value of a: %d\n", *(int*)aPtr);

	/**/

	//
	//POINTER ARITHMETIC -- ONLY ON ARRAY ELEMENTS
	int array1[5] = {1,2,3,4,5};
	int *aPtr = &array1[0];//array1

	size_t i;

	for(i=0; i<5; i++)
	{
		printf("The memory address: %p\t value is: %d\n",aPtr, *aPtr);
		//aPtr++; 
		//HOW DOES THIS WORK? Memory Address + (number * it's byte value)
		//Memory is reserved in 4-byte blocks
		//aPtr++ is the same as - ;

		//aPtr += 2;//What's the result?
		aPtr += 4;//What's the result?
	}
}