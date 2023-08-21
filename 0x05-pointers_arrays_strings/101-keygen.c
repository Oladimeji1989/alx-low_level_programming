#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generating random password
 * Return: 0 (success)
 */
int main(void)
{
	int A;
	char B;

	srand(time(NULL));

	A = 0;

	while (A <= 2645)
	{
		B = rand() % 128;
		A += B;
		putchar(B);
	}
	putchar(2772 - A);
}
