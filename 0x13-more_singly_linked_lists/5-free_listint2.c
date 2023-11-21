#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 -frees list
 * @head: pointer to the pointer of the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
