#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that printsa string
 * @s: string input
 * Return: print a string
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
