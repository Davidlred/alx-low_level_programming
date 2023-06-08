#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: a variable n of data type int
 * Return: -1 f0r failure and 0 for succes
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));

}


