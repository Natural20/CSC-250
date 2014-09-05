#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//create a structure
struct file {
	char name[20];
	char date[20];
	char mode;
};

//create a typedef
typedef struct file File;
typedef File* FilePtr; //struct file*

int main(void)
{
	//declare variables
	struct file aFile = {"file1.c", "1900", 'F'};
	File aFile2 = {"file2.c"};

	struct file* aFilePtr = (struct file*)malloc(sizeof(struct file));

	strcpy(aFilePtr->name, "file3.c");

	FilePtr aFilePtr2 = (FilePtr)malloc(sizeof(File));

	strcpy(aFilePtr2->name, "file4.c");

	//print members
	puts(aFile.name);
	puts(aFile2.name);
	puts(aFilePtr->name);
	puts(aFilePtr2->name);
}