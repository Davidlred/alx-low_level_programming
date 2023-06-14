#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - use free function on previous grid
 * @grid: a two dimensional array to dealocate
 * @height: input of data type int
 * Return: always success
 */
void free_grid(int **grid, int height)
{
	int g;

	if (grid != NULL || height != 0)
	{
		for (g = 0; g < height; g++)
		{
			free(grid[g]);
		}
		free(grid);
	}
}

