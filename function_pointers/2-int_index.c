#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searchers for an integer
 *
 * @array: Array
 *
 * @size: Number of elements in array
 *
 * @cmp: Pointer to function to be used to compare values
 *
 * Return: -1 if no element match and size<=0,index of first element= success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
