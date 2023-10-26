#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a;
	int counter = 0;
	unsigned long int num;

	for (a = 63; a >= 0; a--)
	{
		num = n >> a;

		if (num & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
