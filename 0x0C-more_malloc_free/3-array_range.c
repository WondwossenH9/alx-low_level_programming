#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: included minimum value
 * @max: included maximum value
 * Return: pointer to the newly created array
 * if man > mix, return NULL
 * if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int a;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		array[a] = min;

	return (array);
}
