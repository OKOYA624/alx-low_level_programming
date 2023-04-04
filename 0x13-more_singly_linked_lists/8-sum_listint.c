#include "lists.h"

/**
* sum_listint - returns sum in the list
* @head: a pointer to the head of the list
* Return: return 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
