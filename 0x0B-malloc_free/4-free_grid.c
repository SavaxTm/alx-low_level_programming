#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free allocated memory
 * @grid: Parameter for the pointer to a pointer
 * @height: parameter for pointer 2
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
