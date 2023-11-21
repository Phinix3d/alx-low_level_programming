#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds new nodes
 * @head: pointer to the head ogf the list
 * @n: the value that's will be stored in the new node
 * Return:the address of the new element,
 * NULL, if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
