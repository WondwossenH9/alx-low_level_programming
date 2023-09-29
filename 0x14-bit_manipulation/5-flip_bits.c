#include "main.h"

/**
 * flip_bits - returns the number of bit needed to flip
 * from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, counter = 0;
	unsigned long int b;
	unsigned long int c = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		b = c >> a;
		if (b & 1)
			counter++;
	}

	return (counter);
}
