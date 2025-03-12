#include "main.h"

/**
 * _strncpy - Copie n caractères de src vers dest
 * @dest: La chaîne de destination
 * @src: La chaîne source
 * @n: Le nombre de caractères à copier
 *
 * Return: Un pointeur vers la chaîne de destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copie jusqu'à n caractères de src vers dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Si moins de n caractères sont copiés, remplit le reste avec des '\0' */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
