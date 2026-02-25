#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: Destination buffer
 *
 * @src: Source to copied from
 *
 * @n: Designated number
 *
 * Return: Something idk
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
