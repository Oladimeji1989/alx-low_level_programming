#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 * Return: (void)
 */
void print_alphabet(void);
{
	char aplhabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_puchar('\n');
}
