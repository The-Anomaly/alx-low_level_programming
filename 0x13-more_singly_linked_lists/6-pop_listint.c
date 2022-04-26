#include "lists.h"

/**
* pop_listint - deleted the head node of a linked list
* @head: reference to the head of the list
* Return: data in the deleted node
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = 0;

	if (*head != NULL)
	{
		data = (*head)->n;
		*head = temp->next;
		free(temp);
		return (data);
	}

	return (data);
}
