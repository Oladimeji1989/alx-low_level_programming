#include <stdio.h>
/**
 * main - Fibonacci sequence
 * Return: 0 (success)
 */
int main(void)
{
	long int A, u = 1, v = 2, sum = 0, tsum = 0;

	for (A = 0; A < 49; A++)
	{
		if ((v % 2 == 0) && (v <= 4000000))
		{
			tsum = tsum + v;
		}
		sum = u + v;
		u = v;
		v = sum;
	}
	printf("%ld\n", tsum);
	return (0);
}
