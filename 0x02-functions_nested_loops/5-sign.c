#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: sign of a number
 * Return: (1) if n greater than zero (0) n is zero (-1) n less than zero
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
