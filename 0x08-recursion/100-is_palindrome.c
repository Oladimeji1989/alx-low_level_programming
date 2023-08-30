#include "main.h"
/**
 * strlen_recursion - finding length of string
 * @s: string parameter
 * Return: int
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recursion(s + 1));
}

/**
 * string_def - to compare the various string
 * @s: string parameter
 * @a: first iteration parameter
 * @b: second iteration parameter
 * Return: int
 */
int string_def(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + string_def(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - return palindrone string
 * @s: string parameter
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (string_def(s, 0, strlen_recursion(s) - 1));
}
