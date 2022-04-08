#include "main.h"

/**
* _realloc - reallocate a memory
* @ptr: pointer to previous memory
* @old_size: size of prev allocated space
* @new_size: size of the new momory block
* Return: pointer to the reallocated space
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem, *ptr2;
	unsigned int size, i;

	ptr2 = ptr;
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	else if (old_size < new_size)
		size = old_size;
	else
		size = new_size;

	mem = malloc(new_size);

	if (!mem)
		return (NULL);

	for (i = 0; i < size; i++)
		mem[i] = ptr2[i];

	free(ptr);
	return (mem);
}
