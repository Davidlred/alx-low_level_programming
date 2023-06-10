#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - checks the fuction.
 * @argc:  arguments passed to the function.
 * @argv: value for the argument passed to the function.
 *
 * Return: Returns always success.
 */

int main(int argc, char *argv[])
{
	int i;
	int add;
	int count;

	count = 1;
	add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[count]);
		count++;
	}
	printf("%d\n", add);
	return (0);
}



