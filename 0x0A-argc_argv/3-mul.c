#include <stdio.h>
#include <stdlib.h>
/**
 * main - programm that multiplies two numbers
 * @argc: command parameter
 * @argv: array parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
