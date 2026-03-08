#include "main.h"
#include <stdlib.h>

/**
 * array_range - Crates an array of integers
 *
 * @min: Min value
 *
 * @max: Max value
 *
 * Return: Pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *pArr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	pArr = (int *)malloc((max - min + 1) * sizeof(int));

	if (pArr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < max - min + 1; i++)
	{
		pArr[i] = min + i;
	}

	return (pArr);
}
