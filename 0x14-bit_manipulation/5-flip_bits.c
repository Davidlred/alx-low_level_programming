#include "main.h"

/**
 * flip_bits - Counts the number of bitsto flip
 * @n: The number.
 * @m: The number to flip n to.
 * Return: flipped int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = n ^ m; 
	
	int j = 0;

	while (temp > 0)
	{
		j = j + (temp & 1);
		temp >>= 1;
	}

	return (j);
}
