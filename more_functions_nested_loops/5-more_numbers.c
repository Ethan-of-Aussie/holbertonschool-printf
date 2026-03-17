#include "main.h"

/**
 * more_numbers - Prints numbers 10x
 *
 * Return: Always Success
 */

void more_numbers(void)
{
	int i;
	int a;

	for (i = 1; i < 11; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar('1');
			}
			_putchar('0' + (a % 10));
		}
		_putchar('\n');
	}
}
