#include "main.h"
/**
 * print_line - draw a straight line on the terminal
 * @n: n is the number of times
 * Return: void
 */
void print_line(int n)
{
	int m;

	for (m = 0; m <= n; m++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
