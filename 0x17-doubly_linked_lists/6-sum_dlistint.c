#include "lists.h"

/**
* sum_dlistint - Sums node values of doubly linked list
* @head: Head of doubly linked list
* Return: Sum of nodes
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr && curr->prev)
		curr = curr->prev;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
