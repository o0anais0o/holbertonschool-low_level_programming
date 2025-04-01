#include "lists.h"
#include <stdio.h>

/**
 * list_len - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
size_t node_count = 0;
const list_t *current = h;

if (h == NULL)
return (0);

while (current != NULL)
{
node_count++;
current = current->next;
}
return (node_count);
}
