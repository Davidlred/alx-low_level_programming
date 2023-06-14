#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 given strings
 * @s1:  string one
 * @s2: string to be added to end of first string
 * Return: pointer to newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len_1 = 0;

	unsigned int len_2 = 0;
	char *ptr1;
	char *ptr2;

	ptr1 = s1;
	if (s1)
		while (*ptr1++)
			len_1++;
	else
		s1 = "";

	ptr1 = s2;
	if (s2)
		while (*ptr1++)
			len_2++;
	else
		s2 = "";

	ptr2 = malloc(len_1 + len_2 + 1);
	if (!ptr2)
		return (NULL);
	ptr1 = ptr2;

	while (*s1)
		*ptr1++ = *s1++;
	while (*s2)
		*ptr1++ = *s2++;
	*ptr1 = 0;

	return (ptr2);
}

