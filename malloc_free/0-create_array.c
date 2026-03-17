#include "main.h"
#include <stdlib.h>

/**
 * create_array - Createsanarray of chars and initializes with a specific char
 *
 * @size: Size of array
 *
 * @c: Char used to initialize array
 *
 * Return: NULL if size = 0, pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *mem;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	mem = (char *)malloc(size * sizeof(char));

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		mem[i] = c;
	}

	return (mem);
}
