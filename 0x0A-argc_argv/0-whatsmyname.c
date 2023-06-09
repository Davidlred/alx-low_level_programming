#include "main.h"
#include <stdio.h>
/**
 * main - a function that printf a word followed by a new line
 * @argc: length of array plus 1
 * @argv: an array of command line input
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 1 - argc;

		printf("%s\n", argv[i]);

	return (0);

}

