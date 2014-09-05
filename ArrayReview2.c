/* Final: <Your Name Here> */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 5

//Function Prototype
void PrintValues(int a[], int size);
void ModifyElements(int a[], int size);


/**  Main Function **/
int main(void) {

	int a[SIZE] = {1,2,3,4,5};

	PrintValues(a, s);
	ModifyElements(a, SIZE);
	puts("");
	PrintValues(a, SIZE);
}

void PrintValues(int a[], int size)
{
	int i;
	for(i = 0; i<size; i++)
	{
		printf("Index: %d\tValue: %d\n", i, a[i]);
	}
}

void ModifyElements(int a[], int size)
{
	int i;
	for(i = 0; i<size; i++)
	{
		a[i] = 42;
	}
}
