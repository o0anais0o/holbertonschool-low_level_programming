#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: parametre
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]); /*Moves to the next character to print (skips a character)*/
		i += 2;
	}
	putchar('\n'); /*Prints a new line at the end*/
}

