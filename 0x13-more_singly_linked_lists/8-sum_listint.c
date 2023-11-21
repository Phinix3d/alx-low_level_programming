#include "lists.h"

/**
 * sum_listint - sum of all data
 * @head: pointer to the head of the list
 * Return:  returns the sum, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
