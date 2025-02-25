#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14, followed by a new line
 * Return: nothing
 */
void more_numbers(void)
{
  int i, j, num;
  char num;
 
  for (i = 0; i < 10; i++)
  {
    for (j = '0'; j <= '14'; j++)
    {
        num = j;
        if (num >= 10)
        {
          _putchar(num + '1');
          num -= 10;
        }
        digit = num + '0';
        _putchar(' ');
        }
        _putchar('\n');
    }
}
