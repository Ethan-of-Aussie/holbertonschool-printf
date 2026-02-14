#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
