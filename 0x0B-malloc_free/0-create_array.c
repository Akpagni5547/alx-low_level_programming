#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - Creates an array of chars,
 * @size: Size of the array to create.
 * @c: char to initialize the array c.
 * Return: Pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
