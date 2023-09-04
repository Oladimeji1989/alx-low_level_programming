#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returning pointer to 2 dimensional array
 * @width: width parameter
 * @height: height parameter
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		p[a] = malloc(width * sizeof(int));
		if (p[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(p[a]);
			free(p);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			p[a][b] = 0;
	return (p);
}
