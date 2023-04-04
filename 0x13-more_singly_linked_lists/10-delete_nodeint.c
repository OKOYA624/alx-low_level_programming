#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node of the list
 * @head: Pointer to a pointer
 * @index: Index of the node 
 * Return: returns -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    if (*head == NULL)
        return -1;

    listint_t *prev = NULL;
    listint_t *current = *head;
    unsigned int i = 0;

    while (current != NULL && i < index)
    {
        prev = current;
        current = current->next;
        i++;
    }

    if (current == NULL)
        return -1;

    if (prev == NULL)
        *head = current->next;
    else
        prev->next = current->next;

    free(current);  

    return 1;
}
