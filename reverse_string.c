#include "main.h"
/**
 *
 */
void reverse_string(char *str, int length)
{
  int start = 0;
  int end = length - 1;
  char temp;
  
  while (start < end)
    {
      temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      start++;
      end--;
    }
}
