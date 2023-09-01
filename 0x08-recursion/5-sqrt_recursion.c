#include "main.h"
/**
 * exponent_recursion - returns the natural square root of a number
 * @n: integer number input
 * @i: iterator
 * Return: natural square root of n else (-1)
 */
int exponent_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (exponent_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number input
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (exponent_recursion(n, 0));
}
