#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: NULL on failure else a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[x]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
