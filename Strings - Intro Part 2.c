#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//more advanced strings
int main(void)
{
	char string4[5] = "Test";

	size_t i;

	for(i = 0; i < strlen(string4); i++)
	{
		string4[i] = toupper(string4[i]);

		printf("%c\n", string4[i]);

		printf("%c\n", toupper(string4[i]));

		if(isupper(string4[i]))
		{
			puts("Upper case found!");
		}
	}

	printf("The length of string4 is: %d\n", strlen(string4));


	//scanf reads until it encounters a space, newline, tab or EOF indicator
	puts("Enter two words:");
	char string6[40] = {0};
	scanf("%39s", string6);

	puts(string6);

	//How to use fgets
	puts("Please enter a sentence:");
	char sentence[50] = {0};

	fgets(sentence, 50, stdin);

	printf("You entered: %s\n", sentence);

	//How to use strcpy
	char string7[50] = {0};

	//can't do this
	//string7 = "hello world";

	//what do we do? use strcpy
	strcpy(string7, "hello world");

	printf("Copied: %s\n", string7);

	//finally, comparing strings
	char *blue = "red";
	char *red = "red";

	char string1[] = "test";
	char string2[] = "test";

	if(strcmp(string1, string2) == 0)
	{
		puts("They Match!");
	}else {
		puts("They do not match!");
	}
}