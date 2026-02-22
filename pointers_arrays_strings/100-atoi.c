#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts string to integer
 *
 * @s: string to be passed
 *
 * Return: Converted string
 */

int _atoi(char *s)
{
	int i = 0, sign = 1, start = 0;
	long result = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			start = 1;
			result = result * 10 + (s[i] - '0');
			
			if (sign == 1 && result > INT_MAX)
			{
				return (INT_MAX);
			}
			if (sign == -1 && result < INT_MIN)
			{
				return (INT_MIN);
			}
		}
		else if(start == 1)
		{
			break;
		}
	}

	return (int)(result * sign);
}
