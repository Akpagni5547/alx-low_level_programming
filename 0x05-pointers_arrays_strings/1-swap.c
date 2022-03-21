#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer first value
 * @b: pointer second value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
