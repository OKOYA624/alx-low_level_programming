#include "lists.h"

/**
 * listint_len - returns elements in list
 * @h: pointer to list
 * Return:number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
