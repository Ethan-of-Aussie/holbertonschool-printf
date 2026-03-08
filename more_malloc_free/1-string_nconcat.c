#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: Target string
 *
 * @s2: String to be concatenated
 *
 * @n: Number of bytes to be copied
 *
 * Return: Concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int len1, len2;
	char *mem;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	len1 = i;
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	len2 = j;
	if (n >= (unsigned int) len2)
	{
		n = len2;
	}
	mem = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		mem[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		mem[len1 + j] = s2[j];
	}
	mem[len1 + n] = '\0';
	return (mem);
}
