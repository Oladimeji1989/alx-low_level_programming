#include "main.h"
/**
 * *_strpbrk - search string for set of bytes
 * @s: string parameter
 * @accept: byte parameter
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		s++;

		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
	}
	return ('\0');
}
