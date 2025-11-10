#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: NULL if malloc fails, 0 if width of height is <= 0,
 * returns pointer otherwise.
 */

int **alloc_grid(int width, int height)
{
	int **grid, i_height, i_width;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i_height = 0; i_height < height; i_height++)
	{
		grid[i_height] = malloc(sizeof(int) * width);

		if (grid[i_height] == NULL)
		{
			for (i_height = i_height - 1; i_height >= 0; i_height--)
				free(grid[i_height]);

			free(grid);
			return (NULL);
		}
	}

	for (i_height = 0; i_height < height; i_height++)
	{
		for (i_width = 0; i_width < width; i_width++)
			grid[i_height][i_width] = 0;
	}

	return (grid);
}
