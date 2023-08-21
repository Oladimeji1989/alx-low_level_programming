#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: inverse of a string
 * Return: void
 */
void print_rev(char *s)
{
	int str = 0;

	while (s[str])
		str++;
	while (str--)
		_putchar(s[str]);
	_putchar('\n');
}
