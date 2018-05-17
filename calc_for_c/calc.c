#define _CRT_SECURE_NO_WARNINGS
// for using scanf (not scanf_s)

#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int select;

	for (int titleloop = 0; titleloop < 50; titleloop++)
	{
		printf("-");
	}
	printf("\n");
	printf("\t\tCalculator for C\n");
	for (int titleloop = 0; titleloop < 50; titleloop++)
	{
		printf("-");
	}
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
		default:
			// Unpresented Choice
			printf("\n# ERROR : Input value is invalid!\a\n");
			printf("Please select again.\n\n");
			break;
		}
	}
}

int tcalcu(void)
{
	//time source code line
}

double calcu(void)
{
	//basic calculation code line
}

void scalcu(void)
{
	// call ASCII, binary, octal, hexadecimal code line
}