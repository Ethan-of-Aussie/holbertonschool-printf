#include "main.h"

/**
 * _atoi - Converts string to integer
 *
 * @s: string to be passed
 *
 * Return: Converted string
 */

int _atoi(char *s)
{
	int i = 0, result = 0, sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		result = result * 10 + (s[i] - '0');
	}

	return (result * sign);
}
