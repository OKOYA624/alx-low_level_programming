#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - Adds a node to head of doubly linked list
* @head: Head of doubly linked list
* @n: New node to add
* Return: Pointer to new head of doubly linked list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (*head);
	}

	curr = *head;

	while (curr && curr->prev)
		curr = curr->prev;

	new_node->next = curr;
	curr->prev = new_node;

	*head = new_node;

	return (*head);
}
