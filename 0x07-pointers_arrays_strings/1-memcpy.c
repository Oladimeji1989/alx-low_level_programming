#include "main.h"
/**
 * *_memcpy - To copy the memory area
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
