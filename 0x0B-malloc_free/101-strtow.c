#include "main.h"
#include <stdlib.h>
/**
 * _grid - main entry
 * @grid: input
 * @height: input
 */
void _grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits string into two
 * @str: string to split
 * Return: pointer to the new string
 */
char **strtow(char *str)
{
	char **strptr;
	size_t m, height, i, j, b;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (m = height = 0; str[m] != '\0'; m++)
	{
		if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			height++;
	}
	strptr = malloc((height + 1) * sizeof(char *));
	if (strptr == NULL || height == 0)
	{
		free(strptr);
		return (NULL);
	}
	for (i = b = 0; i < height; i++)
	{
		for (m = b; str[m] != '\0'; m++)
		{
			if (str[m] == ' ')
				b++;
			if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			{
				strptr[i] = malloc((m - b + 2) * sizeof(char));
				if (strptr[i] == NULL)
				{
					_grid(strptr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; b <= m; b++, j++)
			strptr[i][j] = str[b];
		strptr[i][j] = '\0';
	}
	strptr[i] = NULL;
	return (strptr);
}
