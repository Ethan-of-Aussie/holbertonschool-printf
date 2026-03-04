#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to newly allocated space
 *
 * @str: String to be stored in new space
 *
 * Return: NULL if str = NULL or insufficient memory, pointer to string
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
