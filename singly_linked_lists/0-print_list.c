#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
size_t node_count = 0;
const list_t *current = h;
current->len
current->str

if (h == NULL)
return (0);

{
while (current != NULL)
current = current->next;
node_count++;
}

if (current->str == NULL)
{
printf("[0] (nil)\n)");
}
else
{
printf("[%d] %s\n", current->len, curent->str);
}
return (node_count);
}
