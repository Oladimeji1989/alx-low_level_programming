#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that add two positive number
 * @argc: command parameter
 * @argv: array parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b, add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
					return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%i\n", add);
	return (0);
}
