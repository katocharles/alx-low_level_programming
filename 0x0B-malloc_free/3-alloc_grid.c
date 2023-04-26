#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int **grid, idx1, idx2;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (idx1 = 0; idx1 < height; idx1++)
	{
		grid[idx1] = malloc(width * sizeof(int));
		if (grid[idx1] == NULL)
		{
			while (idx1 >= 0)
			{
				free(grid[idx1]);
				idx1--;
			}
			free(grid);
			return (NULL);
		}
		for (idx2 = 0; idx2 < width; idx2++)
			grid[idx1][idx2] = 0;
	}
	return (grid);
}

