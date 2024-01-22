#include "main.h"

/**
 * free_grid - free 2 2D grid previously created by my alloc_grid function
 * @grid: pointer to grid
 * @height: height of grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
