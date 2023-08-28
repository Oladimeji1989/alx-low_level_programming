#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: s parameter
 * @b: b parameter
 * @n: number of memory
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
