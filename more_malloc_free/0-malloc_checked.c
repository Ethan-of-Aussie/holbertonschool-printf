#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: Allocated memory
 *
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pB;

	pB = malloc(b);

	if (pB == NULL)
	{
		exit(98);
	}

	return (pB);
}

