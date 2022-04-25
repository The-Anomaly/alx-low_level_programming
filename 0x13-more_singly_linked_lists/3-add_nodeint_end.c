#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_nodeint_end - adds a new node at the end of a list
* @head: pointer to a pointer to the input list
* @n: input integer
* Return: address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist, *lastlist = *head;

	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);

	newlist->n = n;
	newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (newlist);
	}

	while (lastlist->next != NULL)
		lastlist = lastlist->next;

	lastlist->next = newlist;

	return (newlist);
}
