#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
	char firstName[20];
	char *lastName;
	int age;
	char gender;
};

void PrintEmployee2(struct employee aEmployee);
void PrintEmployee(struct employee *aEmployee);

void TestArray(int a[]);

int main(void)
{

	//Delcare a char array of 80 elements
	char *cPtr = (char*)malloc(sizeof(char) * 80);//How many bytes?

	//And we can continue this for any type
	int *iPtr = (int*)malloc(sizeof(int));
	//char *cPtr = (char*)malloc(sizeof(char));

	//use it as a 'normal' variable
	*iPtr = 99;

	//printf("The value of iPtr is: %d\n", *iPtr);

	free(iPtr);

	//Declare an int array with 10 elements using a pointer and malloc
	int *aPtr = (int*)malloc(sizeof(int) * 10);

	//What if malloc fails? Check for a NULL value
	if(aPtr == NULL)
	{
		return 1;//exit or try to malloc again
	}

	//Back to the array, now we can iterate over it, etc
	size_t i;

	for(i = 0; i < 10; i++){
		//aPtr[i] = 0;//initialize to zero when using malloc
		//printf("%p -- %d\n", &aPtr[i], aPtr[i]);
	}

	//puts("");

	//Don't forget to free the malloc'ed memory
	//You can only free malloc'ed memory
	free(aPtr);

	//You can't do this:
	//int notMalloced = 99;
	//free(notMalloced);

	/*** CALLOC ***/
	//We can use calloc for declaring arrays, much better
	//Why? it initializes each element to zero,malloc doesn't do that
	int arraySize = 10;

	int *arrayPtr = (int *)calloc(arraySize, arraySize * sizeof(int));

	//print off memory addresses and values
	for(i=0;i<arraySize;i++)
	{
		//printf("%p -- %d\n", &arrayPtr[i], arrayPtr[i]);
	}

	puts("");

	//OR we can use pointer arithmetic
	/*for(i=0;i<arraySize;i++)
	{
		//printf("%p -- %d\n", arrayPtr, *arrayPtr);
		arrayPtr++;
	}

	free(arrayPtr);*/

	//One last topic, look at our testArray function
	//What does it print? Not what you expected?

	int array1[5] = {1,2};
	int *array2 = (int*)malloc(sizeof(int)*5);

	//printf("The size of the array: %li\n", sizeof(array1));

	//TestArray(array2);

	/**** Malloc and Structs ****/

	struct employee aEmployee = {"josh","stroschen",33,'M'};

	printf("sizeof struct employee is %li bytes\n", sizeof(struct employee));

	struct employee *aEmp = (struct employee *)malloc(sizeof(struct employee));

	//How do we access members?
	//aEmp->firstName = "Fred";
	strcpy(aEmp->firstName, "Fred");
	//puts(aEmp->firstName);

	char *string1 = "blue";

	aEmp->lastName = "stroschein";

	puts(aEmp->lastName);

	//how do we read in values from the command line?
	puts("Enter a last name:");

	aEmp->lastName = (char*)malloc(sizeof(char) * 20);

	scanf("%s", aEmp->lastName);
	puts("enter an age:");
	scanf("%d", &(aEmp->age));

	puts(aEmp->lastName);
	printf("Age: %d\n", aEmp->age);

	free(aEmp);
}

void TestArray(int a[])
{
	printf("%li\n", sizeof(a));
}

void PrintEmployee2(struct employee aEmployee)
{
	printf("%s\n",aEmployee.firstName);
	printf("%s\n", aEmployee.lastName);
}

void PrintEmployee(struct employee *aEmployee)
{
	printf("%s\n",aEmployee->firstName);
	printf("%s\n", aEmployee->lastName);
}