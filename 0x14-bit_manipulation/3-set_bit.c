#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1.
 * @n: a pointer to the bit
 * @index: the index to set the pointeer to
 * Return: -1 for error and 1 for success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

