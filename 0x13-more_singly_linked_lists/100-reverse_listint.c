#include "lists.h"

/**
* reverse_listint - reversal
* @head:it is a pointer to a pointer
* Return:1st node of reversed list pointer
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *current = *head;
listint_t *previous = NULL;

while (current != NULL)
{
listint_t *next = current->next;
current->next = previous;
previous = current;
current = next;
}

*head = previous;
return (previous);
}
