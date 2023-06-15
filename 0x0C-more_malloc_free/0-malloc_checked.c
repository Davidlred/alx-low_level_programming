#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using the malloc fuction
 * @b: memory address
 * Return: error or pointer to an int
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

