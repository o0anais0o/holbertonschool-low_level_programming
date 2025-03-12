#include "main.h"

/**
 * string_toupper - Convertit les minuscules en majuscules dans une chaîne
 * @str: La chaîne à modifier
 *
 * Return: Un pointeur vers la chaîne modifiée
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
