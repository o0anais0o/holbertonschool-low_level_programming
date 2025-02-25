#include "main.h"

/**
 * print_square - prints a square using the character #
 * @size: the size of the square to be printed
 *
 * Description: If size is 0 or less, the function should print only a new line
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			{
				for (column = 0; column < size; column++)
				{
				_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
