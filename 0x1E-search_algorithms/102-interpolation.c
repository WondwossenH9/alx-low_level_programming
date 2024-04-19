#include "search_algos.h"

/**
  * interpolation_search - searches for a value in a sorted array
  *                        of integers using interpolation
  * @array: pointer to first element of the array
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: If value doesn't exist/array is NULL, -1.
  *         else, first index of value
  *
  * Description: prints a value every time it is compared in the array
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, n, m;

	if (array == NULL)
		return (-1);

	for (n = 0, m = size - 1; m >= n;)
	{
		i = n + (((double)(m - n) / (array[m] - array[n])) * (value - array[n]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			m = i - 1;
		else
			n = i + 1;
	}

	return (-1);
}
