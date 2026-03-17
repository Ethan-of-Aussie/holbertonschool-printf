#include "main.h"

/**
 * prime - Checks for prime number
 *
 * @n: Number to check
 *
 * @i: Divisor
 *
 * Return: 1 for prime else 0
 */

int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (prime(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is prime number
 *
 * @n: Input integer
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
