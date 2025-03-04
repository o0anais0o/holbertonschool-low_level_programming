#include "main.h"

/**
 * _memcpy - copie un nombre spécifié d'octets..
 * ..d'un emplacement mémoire à un autre.
 * @dest: Pointer vers la mémoire de destination..
 * ..où le contenu doit être copié.
 * @src: Pointer vers la mémoire source d'où le contenu doit être copié.
 * @n: Nombre d'octets à copier.
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{	
		dest[index] = *src;
		src++;
	}

	return (dest);
}
