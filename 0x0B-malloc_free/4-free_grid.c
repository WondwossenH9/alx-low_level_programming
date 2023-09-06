#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * by alloc_grid function
 * @grid: array grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; heght >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
