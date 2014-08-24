/* Project: In-Class #3
*
*  Part 1: Get this program to compile and run
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
*		simulate the rolls.
*
*  	4) Add a fourth menu option that allows the user to enter a custom
*       number of sides.  You will need to get that number from the user (scanf)
*       and pass that value to your RollDice function.  Only prompt them for
*		the number of sides if they choose this menu option.
*
*/

#include <stdio.h>
#include <time.h>

//function prototypes
void PrintWelcomeBanner(void);
int MainMenuChoice(void);
void RollDice(int NumberOfRolls, int Sides);

int main (void)
{
	int MenuChoice = 0;
	int NumberRolls = 0;
	int Sides = 0;

	//Welcome Banner
	PrintWelcomeBanner();

	//Seed the random number generator
	srand(time(NULL));

	//print the menu
	MenuChoice = MainMenuChoice();

	while ( MenuChoice != -1) {

		puts("How many rolls?");
		scanf("%d", &NumberRolls);

		switch (MenuChoice) {
			case 1:
				RollDice(NumberRolls, 4);
			break;

			case 2:
				RollDice(NumberRolls, 5);
			break;

			case 3:
				RollDice(NumberRolls, 6);
			break;

			case 5:
			case 4:
				Sides = 0;
				puts("How many Sides?");
				scanf("%d", &Sides);

				RollDice(NumberRolls, Sides);
			break;

			default:
				puts("Invalid Menu Selection");
			break;
		}


		MenuChoice = MainMenuChoice();
	}

	//end program
	puts("Thanks for playing!");
}

void PrintWelcomeBanner(void) {
	puts("\n**** Welcome to Josh's Dice Game! *****");
}

//custom functions
int MainMenuChoice(void){

	int Choice = 0;

	puts("\n\nChoose the type of dice you want to roll. -1 to quit.");
	puts("1: 4-Sided");
	puts("2: 5-Sided");
	puts("3: 6-Sided");
	puts("4: Custom");

	scanf("%d", &Choice);

	return Choice;
}

void RollDice(int NumberOfRolls, int Sides){

	int i;
	int Roll = 0;

	for(i = 1; i <= NumberOfRolls; i++) {

		Roll = (rand() % Sides) + 1;

		printf("%10d", Roll);

		if(i % 4 == 0){
			puts("");
		}
	}
}