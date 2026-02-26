#include "main.h"

/**
 * factorial - Returns factorial of a given number
 *
 * @n: Number to be calculated on
 *
 * Return: Factorial of the provided number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
