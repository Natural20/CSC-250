#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	char Name[50];
	char *String;
	char Major[50];
	unsigned int StudentID;
};

int main(void)
{
	//1 - create a file pointer
	FILE *cfPtr = NULL; 

	//struct to hold student data
	struct student aStudent = {0};

	aStudent.String = "JOSH";

	aStudent.String = malloc(sizeof(char) * 50);

	scanf("%s", aStudent.String);

	puts(aStudent.String);

	//2 - check if we opened the stream
	if((cfPtr = fopen("Students.dat","r")) == NULL)
	{
		puts("File Not Found");
	}
	else
	{
		//Print a header
		printf("%-10s%-10s%-15s\n", "Name","Major","Student ID");

		while(fscanf(cfPtr, "%s%s%d", aStudent.Name, aStudent.Major, &aStudent.StudentID) != EOF)
		{
			printf("%-10s%-10s%-15d\n", aStudent.Name, aStudent.Major, aStudent.StudentID);
		}

		//Use this section to print the contents of the file twice
		/*rewind(cfPtr);

		while(fscanf(cfPtr, "%s%s%d", aStudent.Name, aStudent.Major, &aStudent.StudentID) != EOF)
		{
			printf("%-10s%-10s%-15d\n", aStudent.Name, aStudent.Major, aStudent.StudentID);
		}*/

		//4 - close the file!
		fclose(cfPtr);
	}
}