#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: command parameter
 * @argv: array parameter
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
