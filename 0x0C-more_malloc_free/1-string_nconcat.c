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
	unsigned int i, j, p;
	char *str;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;

	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (p = 0; p < i; p++)
		str[p] = s1[p];
	for (p = 0; p < j; p++)
		str[p + i] = s2[p];
	str[i + j] = '\0';
	return (str);
}

