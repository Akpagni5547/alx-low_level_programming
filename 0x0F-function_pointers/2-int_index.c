#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array name
 * @size: number of elements in the array
 * @cmp: pointer to the function.
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			int i = 0;
			int c;

			while (i < size)
			{
				c = cmp(array[i]);
				if (c != 0)
				{
					return (i);
				}
				i++;
			}
		}
	}
	return (-1);
}
