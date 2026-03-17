#include "main.h"

/**
 * _square - Calculates the square root
 *
 * @n: number whose square root is to be calculated
 *
 * @i: number to check wheter n has a natural square root
 *
 * Return: The calculated square root
 */

int _square(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (_square(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: Number whose square root is to be calculated
 *
 * Return: The calculated square root or -1
 */

int _sqrt_recursion(int n)
{
	return (_square(n, 0));
}
