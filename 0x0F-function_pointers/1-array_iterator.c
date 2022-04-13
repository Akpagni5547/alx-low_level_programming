#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a function given as a parameter on each element
 * @array: array given
 * @size: size of the array
 * @action: callback function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		unsigned int i = 0;

		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
