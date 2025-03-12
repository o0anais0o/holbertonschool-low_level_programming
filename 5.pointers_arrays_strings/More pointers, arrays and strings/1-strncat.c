#include "main.h"

/**
 * _strncat - Concatène n caractères de src à dest
 * @dest: La chaîne de destination
 * @src: La chaîne source
 * @n: Le nombre maximum de caractères à concaténer
 *
 * Return: Un pointeur vers la chaîne résultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Trouver la longueur de dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Copier au plus n caractères de src à la fin de dest */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Ajouter le caractère nul de terminaison si nécessaire */
	if (i < n)
		dest[dest_len + i] = '\0';

	return (dest);
}
