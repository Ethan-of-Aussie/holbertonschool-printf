#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for array, using malloc
 *
 * @nmemb: Number of elements of array
 *
 * @size: Size of elements
 *
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pArr;
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pArr = malloc(nmemb * size);

	if (pArr == NULL)
	{
		return (NULL);
	}

	temp = (char *)pArr;

	for (i = 0; i < nmemb * size; i++)
	{
		temp[i] = 0;
	}

	return (pArr);
}
