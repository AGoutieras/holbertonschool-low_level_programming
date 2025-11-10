#include "main.h"

/**
 * free_grid - returns a pointer to a 2 dimensional array of integers.
 * @grid: array to be freed.
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
