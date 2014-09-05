#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int printMenu(void);

//@todo: use a struct for your cve data

int main(void)
{
	//This may not be portable
	system("clear");
	unsigned int menuChoice = 0;

	menuChoice = printMenu();

	while(menuChoice != 5)
	{

		puts("In here");

		system("clear");

		switch(menuChoice)
		{
			case 1:
				puts("** HIGH Severity **\n");
				//@todo: print all High severity vulns

			break;

			case 2:
				puts("** MEDIUM Severity **\n");
				//@todo: print all medium severity vulns

			break;


			case 3:
				puts("** LOW Severity **\n");
				//@todo: print all low severity vulns

			break;

			case 4:

				puts("Write to file...");
				//@todo: writ to file

			break;

			default:
				puts("Invalid Selection");
		}

		puts("");
		menuChoice = printMenu();

	}//end while

	system("clear");
	puts("*** END OF RUN ***\n");
}

int printMenu()
{
	int menuChoice = 0;
	printf("%s", "Enter Request\n"
		" 1 - List all HIGH severity vulnerabilities\n"
		" 2 - List all MEDIUM severity vulnerabilities\n"
		" 3 - List all LOW severity vulnerabilities\n"
		" 4 - Add an entry\n"
		" 5 - Quit\n"
		"? "
	);
	scanf("%d", &menuChoice);
	return menuChoice;
}