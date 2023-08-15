#include "main.h"
/**
 * main - print _putchar using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int A;

	char B[] = "_putchar";

	for (A = 0; A <= 7; A++)

	{
		_putchar(B[A]);
	}
	_putchar('\n');

	return (0);
}
