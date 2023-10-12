
#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes a node at index in doubly list
* @head: Head of doubly linked list
* @index: Index to delete node
* Return: Integer
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 1;
	dlistint_t *next, *curr = *head;

	while (curr && curr->prev)
		curr = curr->prev;

	if (index == 0 && curr)
	{
		next = *head;
		*head = curr->next;

		if (*head)
			(*head)->prev = NULL;

		free(next);

		return (1);
	}

	while (curr && pos < index)
	{
		curr = curr->next;
		pos++;
	}

	if (curr && pos == index)
	{
		next = curr->next;
		curr->next = (next) ? next->next : NULL;

		if (next && next->next)
			next->next->prev = curr;

		free(next);

		return (1);
	}

	return (-1);
}
