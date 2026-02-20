#include "main.h"

/**
 * print_rev - Prints string in reverse
 *
 * @s: value to be passed
 */

void print_rev(char *s)
{
	int i, c;

	for (c = 0; s[c] != '\0'; c++)
		;
	c--;

	for (i = c; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
