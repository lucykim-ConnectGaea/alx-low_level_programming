#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free mem allocated
 * @grid: Grid
 * @height: height of grid
 * Return:grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		/** If grid is null no need to free*/
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]); /**Free memory for each row*/
	}
	free(grid); /**Free memory for the array of row pointers*/
}
