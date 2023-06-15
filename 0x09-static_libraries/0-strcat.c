#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter1 
 * @src: input parameter2 
 *
 * Return: always true
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}

