#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_num - Checks for digits
 *
 * @s: Given string
 *
 * Return: 0 if not number, 1 if number
 */

int is_num(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}

		return (1);
}



/**
 * main - Adds positive numbers
 *
 * @argc: Argument counter
 *
 * @argv: Argument vector
 *
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

		printf("%d\n", sum);

		return (0);
}


