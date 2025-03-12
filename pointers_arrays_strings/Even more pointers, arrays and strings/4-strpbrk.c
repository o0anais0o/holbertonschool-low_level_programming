#include "main.h"

/**
 * _strpbrk - Recherche une chaîne pour n'importe quel..
 * ..caractère d'un ensemble.
 * @s: La chaîne à rechercher.
 * @accept: La chaîne contenant les caractères à correspondre.
 *
 * Return: Un pointeur vers la première occurrence dans s de n'importe quel
 *         caractère dans accept, ou NULL si aucun caractère n'est trouvé.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s) /* Boucle sur chaque caractère de la chaîne s */
	{
		for (i = 0; accept[i] != '\0'; i++) /* Vérifier chaque octet dans accept */
		{
			if (*s == accept[i]) /* Si une correspondance est trouvée */
			{
				return (s); /* Renvoie un pointeur vers l'octet correspondant */
			}
		}
		s++; /* Passer au caractère suivant dans s */
	}

	return (NULL); /* Renvoie NULL si aucune correspondance n'est trouvée */
}
