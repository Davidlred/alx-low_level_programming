#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function called
 * @n: number of byte to print out
 * Return: returns void
**/
void print_opcodes(char *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%.2hhx", a[j]);
	if (j < n - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of main function
 * @argc: command line argument passed to the function
 * @argv: array containing the list of  pointers to arguments
 * Return: Success if successful
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}

