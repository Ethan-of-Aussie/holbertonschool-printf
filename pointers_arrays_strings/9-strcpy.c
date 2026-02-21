#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies string pointed to by src to buffer pointed to by dest
 *
 * @dest: value to be passed
 *
 * @src: value to be passed
 *
 * Return: copied value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
