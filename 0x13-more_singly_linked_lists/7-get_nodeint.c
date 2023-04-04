#include "lists.h"

/**
* get_nodeint_at_index - return index node of a list
* @head: this a pointer to the head of the list
* @index: index of the node returns from zero
* Return:returns NULL if the node is absent
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i == index && current != NULL)
		return (current);
	else
		return (NULL);
}
