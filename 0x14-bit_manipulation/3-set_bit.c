#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: input number
* @index: input index
*
* Return: 1 if successful, -1 otherwise
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
