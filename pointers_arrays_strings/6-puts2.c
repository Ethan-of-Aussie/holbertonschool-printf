#include "main.h"

/**
 * puts2 - Prints every other character
 *
 * @str: String to be passed
 */

void puts2(char *str)
{
	int  i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}

	_putchar('\n');
}
