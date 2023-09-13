#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: array
 * @size: number of elements of array
 * @cmp: pointer to function to be used to compare values
 * Return: 0 else -1 if element do not match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
