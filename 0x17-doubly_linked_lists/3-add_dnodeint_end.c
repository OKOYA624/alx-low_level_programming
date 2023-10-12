#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - Adds node to end of doubly linked list
* @head: Head of linked list
* @n: Node to add
* Return: Pointer to new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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

	while (curr && curr->next)
		curr = curr->next;

	new_node->prev = curr;
	curr->next = new_node;

	return (new_node);
}
