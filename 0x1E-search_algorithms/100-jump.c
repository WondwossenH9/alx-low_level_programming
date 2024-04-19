#include "search_algos.h"

/**
  * jump_search - searches for a value in a sorted array
  *               of integers using jump search
  * @array: pointer to the first element of the array
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: If value doesn't exits/array is NULL, -1.
  *         else, first index of value
  *
  * Description: prints a value every time it is compared in the array
  *              Uses the square root of array size as a jump step
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value in array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value is located between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value in array[%ld] = [%d]\n", i, array[i]);
	printf("Value in array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
