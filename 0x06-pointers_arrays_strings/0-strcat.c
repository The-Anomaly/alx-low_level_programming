#include "main.h"

/**
* _strcat - concatenate two strings
* @dest: initial string
* @src: string to be added
* Return: concatenate string (dest)
*/
char *_strcat(char *dest, char *src)
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

	for (k = 0; k <= j; k++)
	{
		dest[i + k] = src[k];
	}
	return (dest);
}
