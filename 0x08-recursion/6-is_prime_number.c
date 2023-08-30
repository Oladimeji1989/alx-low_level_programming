#include "main.h"
/**
 * pri_num - finding prime number
 * @d: number parameter
 * @j: divide parameter
 * Return: int
 */
int pri_num(int d, int j)
{
	if (d <= 1 || (d != j && d % j == 0))
	{
		return (0);
	}

	else if (d == j)
	{
		return (1);
	}

	return (pri_num(d, j + 1));
}

/**
 * is_prime_number - return prime number of integers
 * @n: number parameter
 * Return: int
 */
int is_prime_number(int n)
{
	return (pri_num(n, 2));
}
