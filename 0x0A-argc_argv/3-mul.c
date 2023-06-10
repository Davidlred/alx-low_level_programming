#include <stdio.h>
#include <stdlib.h>
/**
 * mul - return multiplication
 * @a: stores an int a
 * @b: stores an int b
 * Return: always sucess
 */

int mul(int a, int b)
{
	return (a * b);
}
/**
 * main - main function
 * @argc: the usual
 * @argv: the other usual
 * Return: always sucesss
 */

int main(int argc, char *argv[])
{	

	 int a = atoi(argv[1]);     
        int b = atoi(argv[2]);
	int result = mul(a, b);

	if  (argc != 3 || argv[1] == '\0' || argv[2] == '\0')
	{
		printf("%s\n", "Error");

		return (1);
	}
	else
	{
		printf("%d\n", result);
	}

	return (0);

}


