#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères
 * @s1: Première chaîne à comparer
 * @s2: Deuxième chaîne à comparer
 *
 * Return: Un entier négatif, zéro ou positif si s1 est respectivement
 * inférieure, égale ou supérieure à s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}

	return (s1[i] - s2[i]);
}
