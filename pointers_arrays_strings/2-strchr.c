#include "main.h"

 /**
 * _strchr - localise la première occurrence d'un caractère spécifique..
 * ..dans une chaîne terminée par un caractère nul.
 * @str: pointeur vers la chaîne terminée par un caractère nul..
 * ..dans laquelle la recherche est effectuée.
 * @c: caractère à rechercher, passé sous forme d'int..
 * ..Il est converti en interne en char.
 * Returns: vers la première occurrence du caractère c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /* Loop through the string */
	{
		if (*s == c) /* Check if the current character matches c */
			return (s); /* Return pointer to the character */
		s++; /* Move to the next character */
	}

	if (*s == c) /* Check if c is the null terminator */
		return (s);

	return (NULL); /* Return NULL if character is not found */
}
