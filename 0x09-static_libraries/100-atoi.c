#include "main.h"

/**
 * _atoi - convert a string to an integer value.
 * @s: the string
 *Return: The integer value of the comverted string.
 */

int _atoi(char *s)
{

	int sig = 1;
	unsigned int num = 0;

	do {

		if (*s == '-')
			sig *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sig);
}

