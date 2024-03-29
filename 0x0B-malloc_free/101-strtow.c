#include "main.h"
#include <stdlib.h>

/**
 * free_grid - deallocate a two dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 * Return - always success
 */
void free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits a string into different parts.
 * @str: a string.
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **out;

	unsigned int c;

	unsigned int height;

	unsigned int i;

	unsigned int j;

	unsigned int a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	out = malloc((height + 1) * sizeof(char *));
	if (out == NULL || height == 0)
	{
		free(out);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				out[i] = malloc((c - a1 + 2) * sizeof(char));
				if (out[i] == NULL)
				{
					free_grid(out, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			out[i][j] = str[a1];
		out[i][j] = '\0';
	}
	out[i] = NULL;
	return (out);
}

