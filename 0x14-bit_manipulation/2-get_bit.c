#include "main.h"

/**
* get_bit - get the value of a bit at a given index
* @n: input integer
* @index: input index
*
* Return: bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index < 64)
		return (0);

	while (n > 0 && i <= 63)
	{
		if (i == index)
			return (n & 1);
		i++;
		n = n >> 1;
	}
	if (index > i && index < 64)
		return (0);
	return (-1);
}
