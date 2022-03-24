#include "main.h"

/**
* _strncat - concatenate two strings
* @dest: initial string
* @src: string to be added
* @n: number of characters to be added from src
*
* Return: concatenated string (dest)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	if (n > j)
	{
		n = j;
	}

	for (k = 0; k < n; k++)
	{
		dest[i + k] = src[k];
	}
	return (dest);
}
