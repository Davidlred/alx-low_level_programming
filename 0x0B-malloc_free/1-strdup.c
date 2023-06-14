#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a value
 * @str: recieves a pointer to char
 * Return: always success
 */

char *_strdup(char *str)
{
	unsigned int ini;

	unsigned int i;

	char  *newstr;

	ini = 0;

	newstr = malloc(sizeof(char) * (ini + 1));

	if (str == NULL)
		return ('\0');

	if (str[ini] != '\0')
		ini++;

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < ini; i++)
		newstr[i] = str[i];

	newstr[ini] = '\0';

	return (newstr);
}


