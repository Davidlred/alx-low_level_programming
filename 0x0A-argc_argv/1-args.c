#include <stdio.h>
/**
 * main - function that returns the position of the array
 * @argc: contains number of command argument
 * @argv: an array of command line argument
 * Return: always success
 *
 */

int main(int argc, char *argv[])
{
	int i = argc;

	int w = 0;

	char *s = argv[w];

	if (*s != '\0')
		printf("%d\n", (i - 1));
	return (0);
}

