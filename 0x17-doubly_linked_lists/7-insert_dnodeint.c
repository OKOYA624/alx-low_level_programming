#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a node at idx of doubly linked list
* @h: Head of doubly linked list
* @idx: Insertion index
* @n: Insertion value
* Return: Pointer to new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *new_node = NULL, *curr = *h;

	while (curr && curr->prev)
		curr = curr->prev;

	if (idx == 0)
		new_node = add_dnodeint(h, n);

	while (curr && idx)
	{
		if (pos == (idx - 1))
		{
			if (!curr->next)
				new_node = add_dnodeint_end(h, n);
			else
			{
				new_node = malloc(sizeof(dlistint_t));

				if (new_node)
				{
					new_node->n = n;
					new_node->prev = curr;
					new_node->next = curr->next;
					curr->next->prev = new_node;
					curr->next = new_node;
				}
			}

			break;
		}

		curr = curr->next;
		pos++;
	}

	return (new_node);
}
