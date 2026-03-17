#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes functions given as parameters on elements of array
 *
 * @array: Array of int
 *
 * @size: Size of array
 *
 * @action: Pointer to function needed to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
