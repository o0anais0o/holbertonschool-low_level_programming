#include <string.h>
#include "lists.h"

/**
* _strlen_custom - Calculates the length of a string.
* @s: Pointer to the string to parse.
*
* Return: Length of the string.
*/
unsigned int _strlen_custom(const char *s)
{
	unsigned int length = 0;

	if (s == NULL)
		return (0);

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
* add_node_end - Adds a new node to the end of a linked list.
* @head: Double pointer to the head of the list.
* @str: String to duplicate in the new node.
*
* Return: Address of the new node, or NULL on failure.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	/* Memory allocation for the new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/* String duplication and error handling */
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculating string length with _strlen_custom */
	new_node->len = _strlen_custom(str);
	new_node->next = NULL;

	/* If the list is empty, the new node becomes the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the last node */
	current = *head;
	while (current->next != NULL)
		current = current->next;

	/* Add the new node at the end */
	current->next = new_node;

	return (new_node);
}
