#include "main.h"

/**
 * memset - remplit les n premiers octets de la zone mémoire.
 * pointée par @s avec l'octet constant @c.
 * @s: un pointeur vers la zone mémoire à remplir.
 * @c: le caractère avec lequel remplir la zone mémoire.
 * @n: le nombre d'octets à remplir.
 *
 * Return: un pointeur vers la zone mémoire remplie @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
