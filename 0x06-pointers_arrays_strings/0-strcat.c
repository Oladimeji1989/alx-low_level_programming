#include "main.h"
/**
 * *_strcat - concatenating two strings
 * @dest: - dest parameter
 * @src: - src parameter
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b, c;

	for (a = 0; dest[a] != '\0'; a++)
	{

	}

	for (b = 0; src[b] != '\0'; b++)
	{

	}

	for (c = 0; c <= b; c++)
	{
		dest[a + c] = src[c];
	}

	return (dest);
}
