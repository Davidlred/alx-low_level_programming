#include "main.h"
#include <stdio.h>
/**
 * main - main - a function that printf a word followed by a new line
 * _putchar: a funtion that prints out a value passed in
 * argv: an array of command linr input
 * argc: the number of element in the array
 * return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	for(i = 0; i < argc; i++)
	       printf("%s \n", argv[0]);
	
	return (0);

}

