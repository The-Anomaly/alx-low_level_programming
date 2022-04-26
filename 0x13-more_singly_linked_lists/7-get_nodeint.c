#include "lists.h"

/**
* get_nodeint_at_index - get nth node of a given list
* @head: pointer to the head of the list
* @index: input index
*
* Return: nth node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
