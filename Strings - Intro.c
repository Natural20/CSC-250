#include <stdlib.h>
#include <stdio.h>

//Defining strings and chars
int main(void)
{
	//Character Constants
	char letterA = 'A';
	char letterB = 66;

	printf("%c -- %c\n", letterA, letterB);

	//string literal - automatically NULL terminated
	char string1[] = "hello world!";

	//individual character constants - Don't forget to NULL terminate
	char string2[] = {'h','e','l','l','o','\0'};

	//using a pointer - automatically NULL terminated
	char *string3 = "string pointer";

	printf("%s -- %s -- %s\n", string1, string2, string3);

	//char array with defined size w/ scanf
	puts("Enter a 4 character max string:");
	char string4[5] = {0};
	scanf("%4s", string4);

	printf("%s\n", string4);

	//THIS WILL NOT WORK
	//char string5[20] = {0};
	//string5 = "hello world";

	//iterate over a char array
	size_t i;
	for(i = 0; i < 4; i++)
	{
		printf("%c -- %d\n", string4[i],string4[i]);
	}

	puts("----");

	//a better way to iterate
	for(i = 0; string4[i] != 0; i++)
	{
		printf("%c -- %d\n", string4[i], string4[i]);
	}
}