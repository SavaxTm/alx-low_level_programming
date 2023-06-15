#include <stdlib.h>
#include <stdio.h>
#include "main.h"
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return NULL;
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return NULL;
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			// Free memory allocated so far
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return NULL;
		}

		// Initialize each element to 0
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
