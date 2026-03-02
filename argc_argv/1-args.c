#include <stdio.h>

/**
 * main - Prints the number of arguments passed onto it
 *
 * @argc: Argument counter
 *
 * @argv: Argument vector
 *
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
