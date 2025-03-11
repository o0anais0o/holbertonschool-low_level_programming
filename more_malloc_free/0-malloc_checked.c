#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - allocate memory using malloc.
* @b: Number of bytes to allocate.
*
* Returns: a pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98); /*Terminer le programme avec le code d'état 98*/

	return (ptr);
}
