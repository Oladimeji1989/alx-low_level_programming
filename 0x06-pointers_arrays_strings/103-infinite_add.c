#include "main.h"

/**
 * rev_string - reversing an array
 * @n: parameter of an integer
 * Return: (success)
 */
void rev_string(char *n)
{
	int a = 0;
	int b = 0;
	char temp;

	while (*(n + a) != '\0')
	{
		a++;
	}
	a--;

	for (b = 0; b < a; b++, a++)
	{
		temp = *(n + b);
		*(n + b) = *(n + a);
		*(n + a) = temp;
	}
}

/**
 * *infinite_add - adds two numbers
 * @n1: n1 parameter
 * @n2: n2 parameter
 * @r: buffer parameter
 * @size_r: buffer size parameter
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, a = 0, b = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
		return (0);
	while (b >= 0 || a >= 0 || overflow == 1)
	{
		if (a < 0)
			val1 = 0;
		else
			val1 = *(n1 + a) - '0';
		if (b < 0)
			val2 = 0;
		else
			val2 = *(n2 + b) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		b--;
		a--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
