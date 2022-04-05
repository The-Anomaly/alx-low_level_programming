#include "main.h"

/**
* free_grid - frees a 2D array
* @grid: 2D array
* @height: array height
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
