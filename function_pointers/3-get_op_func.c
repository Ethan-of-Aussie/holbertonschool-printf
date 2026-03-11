#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Perfroms operations asked by user
 *
 * @s: Operation asked by user
 *
 * Return: NULL if s != options, desired operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
