#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The integer to check
 *
 * Description: This function determines whether a number is positive,
 * negative, or zero. It prints the corresponding sign and returns a value
 * based on the number's sign.
 *
 * Return: 1 and prints + if n is greater than zero
 *         0 and prints 0 if n is zero
 *         -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
