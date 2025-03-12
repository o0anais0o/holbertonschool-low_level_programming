#include "main.h"

/**
 * _strstr - Localise une sous-chaîne dans une chaîne.
 * @haystack: La chaîne principale dans laquelle rechercher.
 * @needle: La sous-chaîne à rechercher.
 * Return: Un pointeur vers le début de la sous-chaîne localisée,..
 * ..ou NULL si la sous-chaîne n'est pas trouvée.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0') /* If needle is empty, return haystack */
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			break;
		}
		if (needle[j] == '\0') /* If we reached the end of needle */
			return (haystack + i);
	}

	return (NULL); /* Substring not found */
}
