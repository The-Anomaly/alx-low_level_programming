#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: reference to the head node of the list
* @idx: index of the list where the new node will be added
* @n: data of the new node
*
* Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *newlist;
	unsigned int i = 0;

	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);

	newlist->n = n;

	if (temp == NULL)
	{
		newlist->next = NULL;
		*head = newlist;
		return (newlist);
	}

	if (idx == 0)
	{
		newlist->next = temp;
		*head = newlist;
		return (*head);
	}

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (idx - 1 != i)
		return (NULL);

	newlist->next = temp->next;
	temp->next = newlist;

	return (newlist);
}
