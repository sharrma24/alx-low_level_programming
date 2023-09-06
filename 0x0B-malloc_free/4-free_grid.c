#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees array
 * @grid: grid
 * @height: height dimension grid
 * Description: frees memory_grid
 * Return:NULL
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
