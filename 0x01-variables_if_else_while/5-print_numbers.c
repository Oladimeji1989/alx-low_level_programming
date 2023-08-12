#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * Return: 0 (success)
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
		printf("%d", b);
	putchar('\n');
	return (0);
}
