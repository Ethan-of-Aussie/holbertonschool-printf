#include "main.h"

/**
 * _strchr - Function that located character in string
 *
 * @s: Traget string
 *
 * @c: Character to be located
 *
 * Return: Pointer to first occurrence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}

	return (0);
}
