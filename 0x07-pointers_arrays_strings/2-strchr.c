#include "main.h"
/**
 * *_strchr - To locate a character in a string
 * @s: string parameter
 * @c: character parameter
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int lc;

	for (lc = 0; s[lc] >= '\0'; lc++)
	{
		if (s[lc] == c)
			return (s + lc);
	}
	return ('\0');
}
