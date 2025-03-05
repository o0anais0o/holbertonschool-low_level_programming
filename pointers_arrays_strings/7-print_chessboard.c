#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: A 2D array representing the chessboard (8x8).
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++) /* Loop through rows */
	{
		for (j = 0; j < 8; j++) /* Loop through columns */
		{
			_putchar(a[i][j]); /* Print each character */
		}
		_putchar('\n'); /* Print a newline after each row */
	}
}
