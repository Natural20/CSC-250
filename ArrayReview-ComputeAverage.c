/* Final: <Your Name Here> */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 15

//Function Prototype
int Generate_Random(int Scale);
int Avg_Array(int a[], int size);

/**  Main Function **/
int main(void) {
	//seed PRNG
	srand(time(NULL));

	int randomNumbers[SIZE] = {0};

	int i;

	for(i = 0; i < SIZE; i++)
	{
		randomNumbers[i] = Generate_Random(99);
		printf("%d\n", randomNumbers[i]);
	}
	puts("");

	printf("The avg is: \t%d\n", Avg_Array(randomNumbers, SIZE));
}

/* Custom Functions */
int Generate_Random(int Scale)
{
	return rand() % Scale;
}

int Avg_Array(int a[], int size)
{
	int i;
	int sum = 0;

	for(i = 0; i < size; i++)
	{
		sum += a[i];
	}

	return sum/size;
}