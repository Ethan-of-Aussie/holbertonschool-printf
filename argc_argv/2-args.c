#include <stdio.h>

/**
 * main - Prints all arguments it receives
 *
 * @argc: Argument conter
 *
 * @argv: Argument vector
 *
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
