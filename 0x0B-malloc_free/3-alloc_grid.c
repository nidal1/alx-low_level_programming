#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to  a 2 dimensional array of intergers
 * @width: width of array
 * @height: height of array
 * Return: double pointer to multi-dimension array
 */
int **alloc_grid(int width, int height)
{
	int **grid, r, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	i = 0;
	while (i < height)
	{
		*(grid + i) = malloc(width * sizeof(int));
		if (!(*(grid + i)))
		{
			while (i--)
				free(*(grid + i));
			free(grid);
			return (NULL);
		}
		r = 0;
		while (r < width)
		{
			*(*(grid + i) + r) = 0;
			r++;
		}
		i++;
	}
	return (grid);
}
