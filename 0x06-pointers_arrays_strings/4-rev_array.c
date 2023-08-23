#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: parameter a
 * @n: parameter n
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b, c;

	b = 0;

	n = n - 1;

	for (b = 0; b < n; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
		n--;
	}
}
