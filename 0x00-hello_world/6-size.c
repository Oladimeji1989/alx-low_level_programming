#include <stdio.h>
/**
 * main - Prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	char  1;
		int 4;
		long int 4;
		long long int 8;
		float 4;

		printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(1));
		printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(4));
		printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(4));
		printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(8));
		printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(4));
			return (0);
}
