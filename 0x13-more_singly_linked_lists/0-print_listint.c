#include "lists.h"

/**
 * print_listint - Prints all the elements
 * @h: A pointer
 *
 * Return:  nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
