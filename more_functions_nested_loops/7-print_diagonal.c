#include "main.h"

/**
 * print_diagonal - Prints diagonal
 *
 * @n: value
 *
 * Return: Always Success
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
