#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the pointer of the list's head
 * @idx: indexwhere the new node should be added
 * @n: data that's will be given to new node
 * Return: the address of the new node, NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_nodeint_end(head, n));
	}

	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
