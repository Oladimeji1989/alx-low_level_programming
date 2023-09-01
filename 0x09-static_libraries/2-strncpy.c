#include "main.h"
/**
 * *_strncpy - To copy a string
 * @dest: dest parameter
 * @src: src parameter
 * @n: n parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}

	for (a = a; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
