/* Introduction to Pointers */
#include <stdlib.h>
#include <stdio.h>

//Function Prototypes
int CubeByValue(int intValue);
void CubeByRef(int *aPtr);

//Main Function
int main(void)
{
	int b = 3;

	printf("Cube by value: %d\n", CubeByValue(b));

	puts("");

	CubeByRef(&b);

	printf("Cube by reference: %d\n", b);

	puts("");

}

int CubeByValue(int intValue)
{
	return intValue * intValue * intValue;
}

void CubeByRef(int *aPtr)
{
	*aPtr = *aPtr * *aPtr * *aPtr;
}

