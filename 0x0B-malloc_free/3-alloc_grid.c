#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width:width of 2D array
 * @height: height of 2D array
 *
 * Description: returns a pointer to a 2 dimensional array of integers.
 * Return: 2D array and null if otherwise
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *)); /**Allocate memory for height*/
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));/**Allocate memory for width*/
		if (grid[i] == NULL)
		{
			/**If memory allocation fails, free and return NULL*/
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0; /**Initialize each element to 0*/
		}
	}
	return (grid);
}
