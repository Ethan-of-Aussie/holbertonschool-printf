#include "main.h"
/**
 *int_to_string - convert ints into strings
 *@num: The number to be printed
 *@buffer: storage
 *Return: The reversed the string
 */
int int_to_string(int num, char *buffer)
{
  int i = 0;
  int is_negative = 0;

  if (num == 0)
    {
      buffer[i++] = '0';
      buffer[i] = '\0';
      return (i);
    }
  if (num < 0)
    {
      is_negative = 1;
      num = -num;
    }
  while (num != 0)
    {
      buffer[i++] = (num % 10) + '0';
      num /= 10;
    }
  if (is_negative)
    {
      buffer[i++] = '-';
    }
  buffer[i] = '\0';
  reverse_string(buffer, i)

    return (i);
}
