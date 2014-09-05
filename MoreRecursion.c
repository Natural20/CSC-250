#include <stdlib.h>
#include <stdio.h>

void recursive(int a);

int main(void)
{
	recursive(5);
}

void recursive(int a)
{
	if(a <= 0)//base case
	{
		puts("0 - Base Case!");
	} else {
		printf("RECURSIVE Step: %d\n", a);
		recursive(a - 1);
		printf("returning from recursive call - %d\n", a);
	}

	return;
}
