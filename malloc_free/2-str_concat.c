#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatentates two strings
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: NULL if empty string/failure, new allocated space with s1+s2+\0
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j;
	int len1, len2;

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
	cat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		cat[len1 + j] = s2[j];
	}
	cat[len1 + len2] = '\0';
	return (cat);
}
