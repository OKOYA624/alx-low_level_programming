/**
* delete_nodeint_at_index - deletes the node at the index
* @head: a pointer to the head of the list
* @index : the index of the node to delete from 0
* Return:returns 0 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;

if (*head == NULL)  /* Check if the list is empty */
return (-1);

if (index == 0)  /* Handle special case when the head node is deleted */
{
current = *head;
*head = current->next;
free(current);
return (1);
}

prev = *head;
current = prev->next;

for (i = 1; current != NULL && i < index; i++)
{
prev = current;
current = current->next;
}

if (current == NULL)  /* Check if the index is out of range */
return (-1);

prev->next = current->next;  /* Delete the node */
free(current);
return (1);
}
