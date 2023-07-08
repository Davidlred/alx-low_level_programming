#include "main.h"

/**
 * get_endianness - Checks the endianness of a digit
 * Return: If big 0 if small 1
 */
int get_endianness(void)
{
	int digit = 1;
	char *check = (char *)&digit;

	if (*check == 1)
		return (1);

	return (0);
}
