#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - allocate memory using malloc.
* @b: Number of bytes to allocate.
*
* Return: a pointer to the allocated memory if the allocation succeeds.
*          If the allocation fails, the program exits with status code 98.
*
* Description: This function uses malloc to allocate 'b' bytes of memory.
* If malloc returns NULL (failure)...
* ...it immediately terminates the program with exit(98).
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98); /*Terminer le programme avec le code d'état 98*/

	return (ptr);
}
