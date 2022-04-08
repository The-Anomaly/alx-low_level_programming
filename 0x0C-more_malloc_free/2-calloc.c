#include "main.h"


/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
* _calloc - allocate memory for an array and initialize to 0
* @nmemb: array height
* @size: array width
*
* Return: pointer to allocated array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);

	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}

	_memset(mem, 0, (nmemb * size));
	return (mem);
}
