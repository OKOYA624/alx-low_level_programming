#include "lists.h"

/**
* get_dnodeint_at_index - Finds node at index in doubly linked list
* @head: Head of doubly linked list
* @index: Index to retrieve node
* Return: Pointer to target node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr = head;

	while (curr && curr->prev)
		curr = curr->prev;

	while (curr && count < index)
	{
		curr = curr->next;
		count++;
	}

	return (curr);
}
