#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of buffers
 * @size: collects the size of the buffer
 * @c: a character buffer
 * Return: always success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array;

	array = malloc(sizeof(char) * size);

	while (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

