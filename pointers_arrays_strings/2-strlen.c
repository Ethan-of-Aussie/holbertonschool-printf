#include "main.h"

/**
 * int _strlen - Returns length of string
 *
 * @s: string to be passed
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	
	return (c);
}
