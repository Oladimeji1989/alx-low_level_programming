#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet x10
 * Retune: void
 */

void print_alphabet_x10(void)
{

	char alphabet;

	int a;

	for (a = 0; a < 10; a++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		_putchar('\n');
	}
}
