#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
 

/**
 * main - Perfroms simple opereations
 *
 * @argc: Argument counter
 *
 * @argv: Argument vector
 *
 * @num1: First number
 *
 * @num2: Second number
 *
 * Return: Error=argument is wrong/none from option/divide by 0, result
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	if (num2 == 0 && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit (100);
	}
	
	printf("%d\n", f(num1, num2));

	return (0);
}
