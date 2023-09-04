#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - to concatunates two strings
 * @s1: first string
 * @s2: second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, d;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}

	p = malloc(sizeof(char) * (a + b + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		p[c] = s1[c];
	}
	for (d = 0; d <= b; d++)
	{
		p[c] = s2[d];
		c++;
	}
	return (p);
}
