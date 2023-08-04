#include "main.h"

/**
 * clear_bit - sets the value of a bit at an index to 0
 * @n: a pointer to abit
 * @index: the index to set the value to
 * Return: -1 for error 1 for success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}

