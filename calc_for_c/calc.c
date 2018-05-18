#define _CRT_SECURE_NO_WARNINGS
// for using scanf (not scanf_s)

#include <stdio.h>
#include <math.h>
#include <time.h>

double calcu(); //Basic operation
int tcalcu(); //Time operation
void scalcu(); //A numberical translation
void line(); //make line
void invaildch(); //invaild Choice

int main()
{
	int select, select2;
	
	// The starting point of the main
	back:
	line();
	printf("\t\tCalculator for C\n");
	line();
	printf("\n");
	//Select the action (use scanf)
	while (1)
	{
		printf("Select the action to perform!\n");
		printf("Enter 0 to exit the program.\n\n ");
		// Sentinel is 0 (using if, break) 
		printf("1. Basic operation\n 2. A numerical translation \n 3. Unit conversion\n 4. Time operation\n Type : *\b");
		
		scanf("%d", &select);

		if (select == 0)
		{
			printf("Program Exit!\n");
			break;
		}
		switch (select)
		{
		case 1:
			back2:
			line();
			printf("\t\tBasic Operation\n");
			line();
			printf("Select calculation type!\n");
			printf("Enter 0 to return to the previous.\n");
			// Similarly, the Sentinel is zero here.
			printf(" 1. Single term calculation\n 2. Calculate two terms\n 3. Polynomial computation\n Type : *\b");

			scanf("%d", &select2);

			if (select2 == 0)
			{
				printf("Return to previous menu!\n\n");
				goto back;
				// go to start menu
			}
			switch (select2)
			{
			default:
				invaildch();
				goto back2;
			}
			break;
		default:
			invaildch();
			break;
		}
	}
}

void line(void)
{
	for (int titleloop = 0; titleloop < 50; titleloop++)
	{
		printf("-");
	}
	printf("\n");
}

void invaildch(void)
{
	printf("\n# ERROR : Input value is invalid!\a\n");
	printf("Please select again.\n\n");
}

int tcalcu(void)
{
	//TODO : time source code line
}

double calcu(void)
{
	//TODO : basic calculation code line
}

void scalcu(void)
{
	//TODO : call ASCII, binary, octal, hexadecimal code line
}
