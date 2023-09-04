#include "main.h"
#include <stdlib.h>
/**
 * ret_str - to return function
 * @grid: grind parameter
 * @height: height parameter
 * Return: void
 */
void ret_string(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
				free(grid[height]);
				free(grid);
	}
}
/**
 * **strtow - to splits a string into words
 * @str: string parameter
 * Return: char
 */
char **strtow(char *str)
{
	char **a;
	unsigned int b, height, c, d, e;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (b = height = 0; str[b] != '\0'; b++)
		if (str[b] != ' ' && (str[b + 1] == ' ' || str[b + 1] == '\0'))
		height++;
	{
	a = malloc((height + 1) * sizeof(char *));
	}
	if (a == NULL || height == 0)
	{
		free(a);
		return (NULL);
	}
	for (c = e = 0; c < height; c++)
	{
		for (b = e; str[b] != '\0'; b++)
		{
			if (str[b] == ' ')
				e++;
			if (str[b] != ' ' && (str[b + 1] == ' ' || str[b + 1] == '\0'))
			{
				a[c] = malloc((b - e + 2) * sizeof(char));
				if (a[c] == NULL)
				{
				ret_string(a, c);
				return (NULL);
				}
				break;
			}
		}
		for (d = 0; e <= b; e++, d++)
			a[c][d] = str[e];
		a[c][d] = '\0';
	}
	a[c] = NULL;
	return (a);
}
