#include "lists.h"


/**
* sum_listint - sums all the data of a linked list
* @head: pointer to the head node
* Return: sum of all the data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
