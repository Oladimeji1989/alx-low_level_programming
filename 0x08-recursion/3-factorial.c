#include "main.h"
/**
 * factorial - returning factorial of a number
 * @n: factorial parameter
 * Return: int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
