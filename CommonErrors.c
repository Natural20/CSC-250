#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void sayHello(int a);
void printLength(char *name);
void passAnArray(int *array, int size);

int main(void)
{
	//sayHello(99);

	//printLength("JoshStroschein");

	//Loop Errors
	/*int i;

	for(i = 0; i =< 5; i = i + 2)
	{
		printf("i = %d\n",i);
	}*/

	//pass an array
	int array1[] = {1,2,3,4,5};

	//printf("%p\n", array1);

	passAnArray(array1, 5);
}

void sayHello(int a)
{
	puts("Hello!");
}

void printLength(char *name)
{
	printf("The length is: %li\n", strlen(name));
}

void passAnArray(int *array, int size)
{
	int i;

	for(i = 0; i<20; i++)
	{
		printf("Element: %d - %d - %p\n", i, array[i], &array[i]);
	}
}