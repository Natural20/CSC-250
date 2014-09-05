/* Introduction to Pointers */
#include <stdlib.h>
#include <stdio.h>

#define SIZE 5

//Function Prototypes
//@TODO: declare a function with three arguments: an array, an int and a pointer
//		 this function should find the average of the values and update the avg
//		 using the pointer
void ComputeAverage(int a[], int size, float *avg);

//Main Function
int main(void)
{
	int a[SIZE] = {1,2,3,4,5};
	float avg = 0;

	ComputeAverage(a, SIZE, &avg);

	printf("The computed average is: %.2f\n", avg);
}

//@TODO: implement the custom function
void ComputeAverage(int a[], int size, float *avg)
{
	int i;
	float sum = 0;

	for(i = 0; i < size; i++)
		sum += a[i];

	*avg = (sum / size);
}