#include "function_pointers.h"
/**
 * int_index - To searches for an integer
 * @array: array parameter
 * @size: array size parameter
 * @cmp: pointer parameter
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
