#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments
 * @ac: ac parameter
 * @av: av parameter
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int b, c, d = 0, e = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c]; c++)
			e++;
	}
	e += ac;

	a = malloc(sizeof(char) * e + 1);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c]; c++)
		{
			a[d] = av[b][c];
			d++;
		}
		if (a[d] == '\0')
		{
			a[d++] = '\n';
		}
	}
	return (a);
}
