#include "main.h"
/**
 * _puts - To print a string
 * @str: strings
 * Return: void
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
