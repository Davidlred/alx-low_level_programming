#include "main.h"

/**
 * length - function to calculate length
 * @s: char s
 * Return: always
 */

int length(char *s)
{
	if (*s == '\0')
		return (1);
	return (1 + length(s + 1));
}

/**
 * check - checks a string
 * length: a function
 * @s: string s
 * @l: variable of type int
 * Return: always 0
 */

int check(char *s, int l)
{
	if (l <= 0)
		return (1);
	if (*s == *(s + (l - 1)))
		return (check(s + 1, l - 2));
	return (0);

}

/**
 * is_palindrome - main function
 * length: function
 * @s: string char
 * Return: always 0
 */

int is_palindrome(char *s)
{
	int l = length(s);

	return (check(s, l));
}


