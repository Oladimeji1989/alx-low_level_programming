#include "main.h"
/**
 * natural_root - returning the  natural square root
 * @c: c parameter
 * @a: iterate parameter
 * Return: int
 */
int natural_root(int a, int c)
{
	if (c * c == a)
	{
		return (c);
	}

	else if (c * c > a)
	{
		return (-1);
	}

	return (natural_root(a, c + 1));
}

/**
 * _sqrt_recursion - returning natural square root
 * @n: root number parameter
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (natural_root(n, 0));
}
