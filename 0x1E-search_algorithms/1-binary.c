#include "search_algos.h"

/**
  * binary_search - searches a value in sorted array
  *                 of ints using binary search
  * @array: pointer to first element of array
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: If value doesn't exist/array is NULL, -1.
  *         else, index of value
  *
  * Description: prints [sub]array being searched after each changes
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
