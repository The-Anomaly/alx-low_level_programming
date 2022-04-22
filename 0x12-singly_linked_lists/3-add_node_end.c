#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - adds a new node at the end of a list
* @head: input list
* @str: input string
* Return: address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist, *lastlist = *head;
	size_t i = 0;

	newlist = malloc(sizeof(list_t));
	if (newlist == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	newlist->str = strdup(str);
	newlist->len = i;
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
