#include "main.h"
/**
 * print_diagonal - prints a diagonal line on the termnal
 * @n: integer
 * return: empty
 */
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (j = 0; j <= n; j++)
	{
	for (k = 0; k < j; k++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
