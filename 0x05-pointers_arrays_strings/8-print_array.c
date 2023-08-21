#include "main.h"
#include <stdio.h>
/**
 * print_array - n elements of an array of integer
 * @a: parameter a
 * @n: parameter n
 * Return: void
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
