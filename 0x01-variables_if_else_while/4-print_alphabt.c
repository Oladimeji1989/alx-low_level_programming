#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char A;

	A = 'a';
	while
		(A <= 'z')
		{
			if ((A != 'q' && A != 'e') && A <= 'z')
				putchar(A);
			A++;
		}
	putchar('\n');
	return (0);
}
