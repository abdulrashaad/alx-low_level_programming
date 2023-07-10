#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees 2d array
 * @grid: 2d grid elements
 * @height: height dimension of the grid
 * Description: frees memory of the  grid
 * Return: empty
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
