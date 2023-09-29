#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number value
 * @index: index of the bit we want to get
 * Return: value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
