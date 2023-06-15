#include "main.h"

/**
 * _isdigit - checks if parameter is a number from 0 till 9.
 * @c: input number.
 * Return: success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

