#include "variadic_functions.h"

/**
 * print_strings - prints some letters
 * @separator: string to be printed
 * @n: number of strings passed to the function.
 * Return: null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *string;
	unsigned int i;


	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
