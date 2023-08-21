#include "main.h"
/**
 * _strlen - To returns the length of a string
 * @s: length of a string
 * Return: int
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len])
	{
		len++;
	}

	return (len);
}
