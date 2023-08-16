#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * @a: absolute value of an integer
 * Return: absolute value
 */
int _abs(int a)
{
	int r;

	if (a < 0)
	{
		r = a * -1;
		return (r);
	}
	return (a);
}
