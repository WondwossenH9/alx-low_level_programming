#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: input number whose facttorial to be returned
 * Return: factorial of n or (-1) if n is negative to indicate error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
