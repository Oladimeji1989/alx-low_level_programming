#include "main.h"
/**
 * print_last_digit - prints and return the last digit
 * @r: last digit
 * Return: last digit
 */
int print_last_digit(int r)
{
	int n = r % 10;
		if (n < 0)
		{
			n = n * -1;
		}
		_putchar(n + '0');
		return (n);
}
