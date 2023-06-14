#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments passed.
  *@ac: count of argument.
  *@av: pointer to array
  *Return: NULL if ac == 0 or av == null, return a new string pointer.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i;

	int n;

	int k = 0;

	int length = 0;

	char *strg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			length++;
	}
	length += ac;

	strg = malloc(sizeof(char) * length + 1);
	if (strg == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			strg[k] = av[i][n];
			k++;
		}
		if (strg[k] == '\0')
		{
			strg[k++] = '\n';
		}
	}
	return (strg);
}

