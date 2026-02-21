#include "main.h"

/**
 * puts_half - Prints half of the string
 *
 * @str: String to be passed
 */

void puts_half(char *str)
{
	int i, c = 0, half;

	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}

	 half = (c + 1)  / 2;

	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
