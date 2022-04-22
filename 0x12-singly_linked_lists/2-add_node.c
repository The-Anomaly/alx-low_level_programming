#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node - adds a new node at the beginning of a list
* @head: input list
* @str: input string
* Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;
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
	newlist->next = *head;

	*head =  newlist;

	return (newlist);
}
