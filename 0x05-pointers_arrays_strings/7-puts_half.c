#include "main.h"
/**
 * puts_half - print half a string
 * @str: the string parameter
 * Return: void
 */
void puts_half(char *str)
{
	int l = 0;
	int h, a;

	while (str[l] != '\0')
	{
		l++;
	}

	h = (l - 1) / 2;

	for (a = (h + 1); a < l; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
