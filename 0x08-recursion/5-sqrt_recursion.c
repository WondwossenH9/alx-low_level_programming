#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: input number
 * Return: returns natural square root or else (-1)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - returns natural square root
 * @n: input number
 * @i: iteration number
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
