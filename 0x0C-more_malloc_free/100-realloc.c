#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - To reallocate a memory block using malloc and free
 * @ptr: pointer parameter
 * @old_size: old size parameter
 * @new_size: new size parameter
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int a, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (a = 0; a < max; a++)
		p[a] = oldp[a];
	free(ptr);
	return (p);
}
