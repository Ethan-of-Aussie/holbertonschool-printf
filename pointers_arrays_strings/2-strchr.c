#include "main.h"
#include <stdlib.h>

/**
 * _strchr(char *s, char c)
 *
 * @s: Traget string
 *
 * @c: Character to be located
 *
 * Return: Pointer to first occurrence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		if (c == '\0')
		{
			return (NULL);
		}
	}

	return (0);
}
