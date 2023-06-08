#include "main.h"
/**
 * sqrtt - takes in two ints
 * @a: varable a of datatype int
 * @b: variable b of datatype int
 * Return: always 0
 *
 */

int sqrtt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrtt(a, b + 1));
}

/**
 * _sqrt_recursion - funtion of square root
 *  @n: variable n
 *  Return: 0
 */

int _sqrt_recursion(int n)
{
	return (sqrtt(n, 0));
}

