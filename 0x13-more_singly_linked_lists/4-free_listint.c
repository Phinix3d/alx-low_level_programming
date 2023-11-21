#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees list
 * @head: pointer of the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
