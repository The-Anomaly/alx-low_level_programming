#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the beginning of a list
* @head: pointer to a pointer to the input list
* @n: input integer
* Return: address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlist;

	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);

	newlist->n = n;
	newlist->next = *head;

	*head =  newlist;
	return (*head);
}
