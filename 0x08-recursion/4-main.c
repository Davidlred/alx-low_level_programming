#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(9, 8);
    printf("%d\n", r);
    r = _pow_recursion(402,0);
    printf("%d\n", r);
    r = _pow_recursion(50, -2);
    printf("%d\n", r);
    r = _pow_recursion(-8, 5);
    printf("%d\n", r);
    return (0);
}
