#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - to return the sum of all its parameters
 * @n: number parameter
 * @...: variable parameter
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list b;
	unsigned int a, sum = 0;

	va_start(b, n);

	for (a = 0; a < n; a++)
		sum += va_arg(b, int);

	va_end(b);

	return (sum);
}
