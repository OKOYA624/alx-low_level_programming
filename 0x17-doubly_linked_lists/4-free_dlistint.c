#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - Frees doubly linked list
* @head: Head of linked doubly linked list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *next;

	curr = head;

	while (curr && curr->prev)
		curr = curr->prev;

	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
