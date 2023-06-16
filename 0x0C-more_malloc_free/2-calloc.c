#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	unsigned int p;

	unsigned int k;

	char *str;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		p = 0;
	else
	{
		for (p = 0; s2[p]; p++)
			;
	}
	if (p > n)
		p = n;
	str = malloc(sizeof(char) * (i + p + 1));
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (k = 0; k < p; k++)
		str[k + i] = s2[k];
	str[i + p] = '\0';
	return (str);
}

