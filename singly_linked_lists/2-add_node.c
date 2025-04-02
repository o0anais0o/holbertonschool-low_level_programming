#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to duplicate and add to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node, *current;

new_node = malloc(sizeof(list_t));
if (!new_node) /*Allocate memory for new node*/
return (NULL);

new_node->str = strdup(str); /*Duplicate string and handle allocation failure*/
if (str && !new_node->str)
{
free(new_node);
return (NULL);
}

new_node->len = str ? strlen(str) : 0; /* Calculate string length */
new_node->next = NULL; /*Insert at the end of the list*/

if (*head == NULL) /* Handle empty list case */
{
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL) /* Traverse to last node */
current = current->next;
current->next = new_node;
}
return (new_node); /*Return result*/
}
