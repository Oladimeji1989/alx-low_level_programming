#include "main.h"
/**
 * swap_int - To swaps the values of two integers
 * @a: parameter of the first int
 * @b: parameter of the second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	int *m = &n;

	*m = *a;
	*a = *b;
	*b = *m;
}
