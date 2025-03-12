#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 *
 * Description:
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *memory_block;
unsigned int total_size, i;

if (nmemb == 0 || size == 0) /*Vérifier si nmemb ou size est 0*/
return (NULL);

total_size = nmemb * size;  /*Calculer la taille totale nécessaire*/

memory_block = malloc(total_size);  /*Allouer la mémoire*/
if (memory_block == NULL)
return (NULL);

for (i = 0; i < total_size; i++) /*Initialiser la mémoire allouée à zéro*/
memory_block[i] = 0;

return ((void *)memory_block);

}
