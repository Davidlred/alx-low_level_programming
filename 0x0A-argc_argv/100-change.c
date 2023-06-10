#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the function.
 * @argc: arguments of the function.
 * @argv: value of the arguments passed to the function.
 * Return: Return always success.
**/
int main(int argc, char *argv[])
{
	int naira, coins = 0;

	if (argc == 2)
	{
		naira = atoi(*(argv + 1));
		while (naira > 0)
		{
			if (naira % 25 < naira)
			{
				naira -= 25;
				coins++;
			}
			else if (naira % 10 < naira)
			{
				naira -= 10;
				coins++;
			}
			else if (naira % 5 < naira)
			{
				naira -= 5;
				coins++;
			}
			else if (naira % 2 < naira)
			{
				naira -= 2;
				coins++;			}
			else if (naira % 1 < naira)
			{
				naira -= 1;
				coins++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}




