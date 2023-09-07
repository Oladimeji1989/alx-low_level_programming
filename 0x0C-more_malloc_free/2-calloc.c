#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - To allocate memory for an array using malloc
 * @nmemb: block parameter
 * @size: size parameter
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;
	return (ptr);
}
