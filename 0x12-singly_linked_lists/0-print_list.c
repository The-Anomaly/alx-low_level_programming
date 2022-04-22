#include "lists.h"

/**
* print_list - print all elements in a list
* @h: input list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
