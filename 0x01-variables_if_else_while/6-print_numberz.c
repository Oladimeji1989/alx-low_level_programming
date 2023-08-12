#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 using putchar
 * Return: 0 (sucess)
 */
int main(void)
{
	int b;

	b = 0;
	while
		(b < 10)
		{
			putchar(b + '0');
			b++;
		}
	putchar('\n');
	return (0);
}
