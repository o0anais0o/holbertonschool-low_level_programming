#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: The head of the dlistint_t list.
*
* Return: The number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0; /*variable to count the number of nodes traveled*/

	while (h) /*loop to iterate through the list*/
	{
		nodes++; /*Increments the counter*/
		printf("%d\n", h->n);
/*Displays the value contained in the n field of the current node*/
		h = h->next; /*Move to the next node using the next pointer*/
	}
	return (nodes);
}
