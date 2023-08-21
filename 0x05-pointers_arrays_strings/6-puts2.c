#include "main.h"
/**
 * puts2 - character of a string, starting with the first character
 * @str: character of a string
 * Return: void
 */
void puts2(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');

}
