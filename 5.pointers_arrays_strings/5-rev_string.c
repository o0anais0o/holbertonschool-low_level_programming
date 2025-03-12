#include "main.h"

/**
 * rev_string - reverses a string
 * @s: is pointer to a character
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	/* Calculer la longueur de la chaîne */
	while (s[length] != '\0')
	length++;

	/* Inverser la chaîne */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
