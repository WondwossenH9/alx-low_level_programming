#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *potr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	potr = malloc(sizeof(int) * size);

	if (potr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		potr[a] = min++;

	return (potr);
}
