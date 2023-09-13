#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add operation
 * @a: first parameter
 * @b: second parameter
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub operation
 * @a: first parameter
 * @b: second parameter
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication operation
 * @a: first parameter
 * @b: second parameter
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide operation
 * @a: first parameter
 * @b: second parameter
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus operation
 * @a: first parameter
 * @b: second parameter
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
