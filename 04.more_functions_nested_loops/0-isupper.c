#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: c = char
 * Return: 1 if c is uppercase else return 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
