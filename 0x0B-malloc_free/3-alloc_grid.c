#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **tree;

	int i;

	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	tree = malloc(height * sizeof(int *));
	if (tree == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tree[i] = malloc(width * sizeof(int));
		if (tree[i] == NULL)
		{
			while (i >= 0)
				free(tree[i--]);
			free(tree);
			return (NULL);
		}


		for (k = 0; k < width; k++)
			tree[i][k] = 0;
	}

	return (tree);
}

