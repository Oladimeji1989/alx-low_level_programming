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
		{
			for (a = 0; accept[a]; a++)
			{
				if (*s == accept[a])
						return (s);
			}
		}
		s++;
	}
	return ('\0');
}
