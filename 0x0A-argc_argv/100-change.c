#include <stdio.h>
#include <stdlib.h>
/**
 * main - programm that give changes for amount of money
 * @argc: command parameter
 * @argv: array parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int cents, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
			return (1);
	}
	else
	{
		cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coin += 1;
	}
	}
	printf("%i\n", coin);
	return (0);
}
