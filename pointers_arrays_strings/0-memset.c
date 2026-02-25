#include "main.h"

/**
 * _memset - Fills memory
 *
 * @s: Pointer
 *
 * @b: constant byte
 *
 * @n: designated number
 *
 * Return: Memeory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		((unsigned char *)s)[i] = b;
	}

	return (s);
}
