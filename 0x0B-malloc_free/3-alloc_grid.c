#include "main.h"

/**
* alloc_grid - create 2D array and initialize all element to 0
* @width: width of the array
* @height: height of the array
*
* Return: pointerto a 2D array
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int**)malloc(sizeof(int*) * height);
	for (i = 0; i < height; i++)
		grid[i] = (int*)malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
