#include "main.h"
/**
 * _strcmp - compares two different strings
 * @s1: input parameter_1
 * @s2: input parameter_2
 * Return: 0 if equal or b if is different
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}

