#include <stdio.h>
/**
 * main - a function that returns value
 * @argc: a number of command line argument
 * @argv: list of command line arguments
 * Return: always program success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

