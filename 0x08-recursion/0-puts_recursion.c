#include "main.h"

/**
 * _puts_recursion - prints out a string and returns a new line
 * @s: a string of character data type
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if(*(s) != '\0') {

		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if(*(s) =='\0') {
		_putchar('\n');
	}
}

