#include "main.h"
/**
 * _pow_recursion - raises the value of x to the power of y
 * @x: integers that would be passed into the fuction
 * @y: int of name y
 * Return: always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	while (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}


