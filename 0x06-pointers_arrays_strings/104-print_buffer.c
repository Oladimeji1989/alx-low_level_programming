#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that point to a buffer
 * @b: b parameter
 * @size: buffer parameter
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int a, e, d;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		e = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (d = 0; d < 10; d++)
		{
			if (d < e)
				printf("%02x", *(b + a + d));
			else
				printf(" ");
			if (d % 2)
			{
				printf(" ");
			}
		}
		for (d = 0; d < e; d++)
		{
			int c = *(b + a + d);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}
