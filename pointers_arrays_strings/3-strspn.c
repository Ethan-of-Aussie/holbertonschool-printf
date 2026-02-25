#include "main.h"

/**
 * _strspn - length of prefix substring
 *
 * @s: initial segment
 *
 * @accept: target to be accepted
 *
 * Return: number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}

		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (c);
}
