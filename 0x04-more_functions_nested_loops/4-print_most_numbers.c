#include "main.h"
/**
 * print_most_numbers - print missing digit
 */
void print_most_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		if (m != 2 && m != 4)
		{
			_putchar(m + '0');
		}
	}
	_putchar('\n');

}
