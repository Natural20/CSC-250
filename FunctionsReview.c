/* Project: In-Class #3
*  Author: <Your Name Here>
*
*  Part 0: Put your ^name on the top of this program
*
*  Part 1: Get this program to compile and run. Not all errors are syntax errors.
*          Look for the hints below to help you, there are 2 errors.
*
*  Part 2: Implement the following functionality:
*
*	1) Create a function that displays a welcome banner when your program starts. Do
*		something simple, like printing "Welcome to Josh's Dice Game!".  The return
*		type should be void and this function does not need any arguments.
*
*	2) Implement a MainMenuChoice function.  I've created the function prototype,
*		you just need to implement the function.
*
*	3) Implement a roll dice function that has two arguments: one for the
*		number of rolls and one for the sides of the dice.  Call this function
*		RollDice. You will need to use modulus to generate random numbers to
*		simulate the rolls. Here's a hint, the following code would product
*		results between 1 and 4:
*
*		int Roll = (rand() % 4) + 1;
*
*  	4) Add a fourth menu option that allows the user to enter a custom
*       number of sides.  You will need to get that number from the user (scanf)
*       and pass that value to your RollDice function.  Only prompt them for
*		the number of sides if they choose this menu option.
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function prototypes
void DisplayMessage(void);
int MainMenuChoice(void);


int main (void)
{
	int MenuChoice = 0;
	int NumberRolls = 0;
	int Sides = 0;

	DisplayMessage();

	//Seed the random number generator
	srand(time(NULL));

	//print the menu
	puts("\nChoose the type of dice you want to roll. -1 to quit.");
	puts("1: 4-Sided");
	puts("2: 5-Sided");
	puts("3: 6-Sided");
	scanf("%d", &MenuChoice);

	//@hint: look here for error
	while (MenuChoice != -1) {

		puts("How many rolls?");
		//@hint: look here for error
		scanf("%d", NumberRolls);

		switch(MenuChoice) {
			case 1:
				puts("Not Yet Implemented");
			break;

			case 2:
				puts("Not Yet Implemented");
			break;

			case 3:
				puts("Not Yet Implemented");
			break;

			case 4:
				puts("Not Yet Implemented");
			break;

			default:
				puts("Invalid Menu Selection");
		}

		MenuChoice = MainMenuChoice();
	}

	//end program
	puts("Thanks for playing!");
}

//custom functions
void DisplayMessage(void)
{
	puts("** WELCOME **");
}

int MainMenuChoice(void)
{
	int MenuChoice = 0;
	puts("\nChoose the type of dice you want to roll. -1 to quit.");
	puts("1: 4-Sided");
	puts("2: 5-Sided");
	puts("3: 6-Sided");

	scanf("%d", &MenuChoice);

	return MenuChoice;
}
