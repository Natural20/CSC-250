/* In-Class */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

//@todo: function that will print all values of an array
//@todo: function that will return avg of values in array
//@todo: function that will return sum of values in array
//@todo: declare another function, one that multiplies all values by two
int GenerateRandomNumber(int Scale);
void ModifiedArray(int a[], int size);
int ComputedAverage(int a[], int size);
void DisplayArray(int a[], int size);

int main (void) {

	//seed the random number generator
	srand(time(NULL));

	//declare an array
	int randomNumber[SIZE] = {0};

	//populate the array
	size_t i;
	size_t j;

	for(i = 0; i < SIZE; i++){
		
		printf("I = %d\n", i);

		randomNumber[i] = GenerateRandomNumber(100);

		for(j = 0; j < SIZE; j++)
		{
			printf(" - j = %d\t", j);
		}

		puts("");
	}

	//DisplayArray(randomNumber, SIZE);

	//ModifiedArray(randomNumber, SIZE);

	//puts("");

	//DisplayArray(randomNumber, SIZE);
}


int ComputedAverage(int a[], int size)
{
	int i;
	int sum = 0;

	for(i = 0; i < size; i++)
	{
		sum += a[i];
	}

	return sum / size;
}

void ModifiedArray(int a[], int size)
{
	int i;

	for(i = 0; i < size; i++){
		a[i] = 0;
	}
}

void DisplayArray(int randomNumber[], int size)
{
	size_t i;

	for(i = 0; i < size; i++){
		printf("Element: %li - Value: %d\n", i, randomNumber[i]);
	}
}

int GenerateRandomNumber(int Scale){
	return rand() % Scale;
}