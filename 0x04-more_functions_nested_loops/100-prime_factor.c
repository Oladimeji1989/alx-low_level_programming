#include <stdio.h>
/**
 * main - prime factor of number
 * Return: 0 (success)
 */
int main(void)
{
	long int a, b, c;

	b = 612852475143;
	for (a = 1; a <= b; a++)
	{
		if (b % a == 0)
		{
			if (b == a)
			{
				printf("%ld", a);
				break;
			}
			c = b / a;
			b = c;
		}
	}
	return (0);
}
