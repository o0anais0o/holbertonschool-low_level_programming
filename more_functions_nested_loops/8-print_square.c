#include "main.h"

/**
 * print_triangle - prints a triangle of # characters
 * followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	const int size = 5;  // Declare and initialize size
	int row, column, space;

	if (size <= 0) 
	{
		putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)  // Fixed loop condition
		{
			for (space = size - row; space > 0; space--)
			{
				putchar(' ');	
			}
			for (column = 1; column <= row; column++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	return 0;  // Added return statement
}
