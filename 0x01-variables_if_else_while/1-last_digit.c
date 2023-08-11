#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assign a random number in order to print the last digit
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;
	if (o > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, o);
	else if (o == 0)
		printf("Last digit of %d is %d and is 0\n", n, o);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, o);
	return (0);
}
