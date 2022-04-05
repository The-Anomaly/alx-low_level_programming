#include "main.h"

/**
* create_array -  creates an array of chars,
* and initializes it with a specific char.
* @size: size of the array
* @c: initializing char
*
* Return: pointer to an array
*/
char *create_array(unsigned int size, char c)
{
	char *ray;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ray =  malloc(sizeof(char) * size);

	if (ray == NULL)
		return (NULL);
	while (i < size)
	{
		*(ray + i) = c;
		i++;
	}
	return (ray);
}
