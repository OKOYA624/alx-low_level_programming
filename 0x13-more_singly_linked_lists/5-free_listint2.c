#include "lists.h"

/**
* free_listint2 -frees the list.
* @head: A pointer to a pointer to the head of list.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
