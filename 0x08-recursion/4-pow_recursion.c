#include "main.h"
/**
 * _pow_recursion - returns pwoer of x to the power of y
 * @x: input integer
 * @y: input integer
 * Return: (-1) if y is negative else return the power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
