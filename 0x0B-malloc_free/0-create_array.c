#include "main.h"
#include <stdlib.h>
/**
 * *create_array - to create and initialize array of character
 * @size: parameter array size
 * @c: character parameter
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		p[a] = c;
	}
	return (p);
}
