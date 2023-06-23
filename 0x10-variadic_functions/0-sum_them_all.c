#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of its parameters.
 * @n: amount of the arguments.
 * Return: added parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int add = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
		add += va_arg(list, int);

	va_end(list);

	return (add);
}

