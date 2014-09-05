#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char Name[50] = {0};
	char Major[50] = {0};
	int StudentID = 0;

	FILE *cfPtr; //FILE pointer

	if((cfPtr = fopen("StudentsV2.dat","w")) == NULL)
		puts("404: File Not Found");
	else {

		puts("Enter the student name, Major and Student ID.");
		puts("Enter EOF to end input.");
		printf("%s", "? ");

		scanf("%49s%49s%d", Name, Major, &StudentID);

		while(!feof(stdin))
		{
			fprintf(cfPtr, "%s %s %d\n", Name, Major, StudentID);
			printf("%s","? ");
			scanf("%49s%49s%d", Name, Major, &StudentID);
		}

		fclose(cfPtr);
	}
}