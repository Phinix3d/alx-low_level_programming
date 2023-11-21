#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the pointer of the head of the list
 * @index: index ...
 * Return: 1 if succed , -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	current = *head;
	for (i = 0; (i < index - 1) && (current != NULL); i++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	ptr = current->next;
	current->next = ptr->next;
	free(ptr);
	return (1);

}
