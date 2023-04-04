#include "lists.h"

/**
* add_nodeint_end -adda a new node at the end of the list
* @head: A pointer to a pointer to a head
* @n: an int to a store
*
* Return: returns Null if it fails
*         Otherwise - a pointer to the new node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
