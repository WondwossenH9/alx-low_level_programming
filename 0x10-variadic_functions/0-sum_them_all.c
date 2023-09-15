#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its paramters
 * @n: number of paramters
 * @...: variable number of paramters
 * Return: zero (0) if n == 0 else the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
