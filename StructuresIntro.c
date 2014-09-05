#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structures
struct card {
	char *face;
	char *suit;
};

struct employee {
	char *firstName;
	char *lastName;
	int age;
	char gender;
	double salary;
	struct employee *boss;
};

struct employee2 {
	char firstName[30];
	char lastName[30];
	int age;
	char gender;
	double salary;
};

//function prototypes
void printEmployee(struct employee aEmp);
void printEmployee2(struct employee *aEmp);
void printName(char *fName, char *lName);

int main(void)
{
	//Create a structure variable
	struct card aCard = {"king","spades"};

	//print
	//printf("The members are: %s - %s\n", aCard.face, aCard.suit); 

	//Create an employee struct variable
	struct employee aEmp;

	aEmp.firstName = "Josh"; //This only works when the member is a pointer for a string
	aEmp.lastName = "Stroschein"; //This only works when the member is a pointer for a string
	aEmp.age = 33;
	aEmp.gender = 'M';
	aEmp.salary = 2000;

	//Create an employee struct variable
	struct employee2 aEmp2;

	//aEmp2.firstName = "Josh"; //This only works when the member is a pointer for a string
	//aEmp2.lastName = "Stroschein"; //This only works when the member is a pointer for a string

	//Why doesn't that work?

	//What is the value of an array variable w/o an index?
	//printf("The value of array: %p\n", aEmp2.firstName);
	//It's a memory address!

	//so we can't assign a char/string to a pointer, need to use strcpy
	strcpy(aEmp2.firstName, "Josh");
	strcpy(aEmp2.lastName, "Stroschein");

	//declare a struct as a pointer
	struct employee *ePtr = &aEmp;

	//ePtr->firstName = "Updated";

	//pass a strut to a function
	//printEmployee(aEmp);
	//printEmployee2(&aEmp);
	//printEmployee2(ePtr);
	printName(ePtr->firstName, ePtr->lastName);
	printName(aEmp.firstName, aEmp.lastName);

	//change the member using arrow operator
	//ePtr->firstName = "Updated!!";
	//printEmployee2(ePtr);
}

//Use of the dot-operator
void printEmployee(struct employee aEmp)
{
	printf("First Name:\t%s\n",aEmp.firstName);
	printf("Last Name:\t%s\n", aEmp.lastName);
}

//use of the arrow operator
void printEmployee2 (struct employee *aEmp)
{
	printf("First Name:\t%s\n",aEmp->firstName);
	printf("Last Name:\t%s\n", aEmp->lastName);
}

void printName(char *fName, char *lName)
{
	printf("First Name:\t%s\n", fName);
}