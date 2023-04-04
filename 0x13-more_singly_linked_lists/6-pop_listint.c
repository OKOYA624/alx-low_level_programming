#include "lists.h"

/**
* pop_listint -returns data after deleting head node
* @head: a pointer to the pointer of the  head list
* Return: returns data or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
