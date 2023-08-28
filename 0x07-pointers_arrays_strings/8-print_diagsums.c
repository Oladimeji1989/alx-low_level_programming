#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - two diagonals of square matrix of integer
 * @a: variable parameter
 * @size: parameter size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int matrix, b = 0, c = 0;

	for (matrix = 0; matrix < size; matrix++)
	{
		b +=  a[matrix];
		a += size;
	}

	a -= size;

	for (matrix = 0; matrix < size; matrix++)
	{
		c += a[matrix];
		a -= size;
	}

	printf("%d, %d\n", b, c);
}
