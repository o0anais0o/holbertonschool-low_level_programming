#include <stdlib.h>
#include <string.h>
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
	list_t *new_node;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node) /* Allocate memory for new node */
		return (NULL);
    /*Duplicate string and handle allocation failure*/
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	/* Calcul de la longueur manuellement */
	while (str[length] != '\0')
		length++;
	new_node->len = length; /* Assignation de la longueur */
	new_node->next = *head; /* Insert at the beginning of the list */
	*head = new_node;
	return (new_node); /* Return the new node */
}
