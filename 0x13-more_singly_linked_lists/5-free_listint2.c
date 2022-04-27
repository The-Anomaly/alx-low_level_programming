#include "lists.h"

/**
* free_listint2 - frees a linked list and sets head to NULL
* @head: pointer to a pointer to the linked list
*
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
