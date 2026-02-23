#include "main.h"

/**
 * *_strncat: Concatenates two strings
 *
 * @dest: Targer string
 *
 * @src: To be joined to target
 *
 * @n: specified bytes
 *
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j <  n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
