#include "main.h"
/**
 * _strchr - Entry point
 * @s: input1
 * @c: input2
 * Return: (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

