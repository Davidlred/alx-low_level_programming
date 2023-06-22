#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array containing names passsed
 * @size: The number of turns
 * @cmp: Pointer to a function
 * Return: Success
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
		{
			return (n);
		}
	}

	return (-1);
}

