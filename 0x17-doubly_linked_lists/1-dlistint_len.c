#include "lists.h"

/**
* dlistint_len - Counts the nodes in a doubly linked list
* @h: Head of doubly linked list
* Return: Number of nodes in doubly linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *curr = h;

	while (curr)
	{
		nodes++;
		curr = curr->next;
	}

	return (nodes);
}
