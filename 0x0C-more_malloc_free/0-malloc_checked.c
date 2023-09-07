#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - To allocate memory using malloc
 * @b: memory parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
