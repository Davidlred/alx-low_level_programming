#include "main.h"

/**
 * binary_to_uint - binary to int converter
 * @b: pointer to binary
 * Return: converted unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int len, base_specifier;

	if (!b)
		return (0);

	result = 0;

	for (len = 0; *(b + len) != '\0'; len++)
		;

	for (len--, base_specifier = 1; len >= 0; len--, base_specifier *= 2)
	{
		if (b[len] != '0' && *(b + len) != '1')
		{
			return (0);
		}

		if (*(b + len) & 1)
		{
			result = result + base_specifier;
		}
	}

	return (result);
}
