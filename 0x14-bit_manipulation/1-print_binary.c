#include "main.h"

/**
 * print_binary - Prints the binary representation of a given integer.
 * @n: binary number with representation n.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
