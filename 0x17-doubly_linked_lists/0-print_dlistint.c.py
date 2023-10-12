#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - Prints doubly linked list
* @h: Head of doubly linked list
* Return: Number of nodes in doubly linked list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *curr = h;

	while (curr)
	{
		printf("%d\n", curr->n);
		nodes++;
		curr = curr->next;
	}

	return (nodes);
}
