#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: parameter dest
 * @src: parameter src
 * @n: n parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{

	}

	for (b = 0; src[b] != 0 && b < n; b++)
	{
		dest[a + b] = src[b];
	}

	return (dest);
}
