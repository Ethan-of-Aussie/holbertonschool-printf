#include "main.h"

/**
 * rev_string - Reverses the string
 *
 * @s: string to be passed
 */

void rev_string(char *s)
{
	int c = 0, i;
	char t;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}

	for (i = c - 1; i >= c / 2; i--)
	{
		t = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = t;
	}
}

