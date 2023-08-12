#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char A;

	int B;

	A = 'a';
	B = 0;
	while
		(B < 10)
		{
			putchar(B + '0');
			B++;
		}
	while
		(A <= 'f')
		{
			putchar(A);
			A++;
		}
	putchar('\n');
	return (0);
}

