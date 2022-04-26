#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at a given index
* @head: reference to head node
* @index: index to delete
*
* Return: 1 if successful, -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head, *prev;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i != index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (index > i)
		return (-1);

	prev->next = temp->next;
	free(temp);
	return (1);
}
