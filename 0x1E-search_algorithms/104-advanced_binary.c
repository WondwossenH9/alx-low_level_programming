#include "search_algos.h"

/**
  * advanced_binary_recursive - searches recursively for a value in a sorted
  *                             array of integers using binary search
  * @array: pointer to the first element of the [sub]array
  * @left: starting index of the [sub]array
  * @right: ending index of the [sub]array
  * @value: value to search for
  *
  * Return: If value doesn't exist, -1.
  *         else, index of value
  *
  * Description: prints the [sub]array being searched after each change
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - searches for a value in a sorted array
  *                   of integers using advanced binary search
  * @array: pointer to the first element of the array
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: If value doesn't exist/array is NULL, -1
  *         else, the first index of value location
  *
  * Description: prints the [sub]array being searched after each change
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
