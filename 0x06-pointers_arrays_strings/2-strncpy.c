#include "main.h"

/**
* _strncpy - copy a string
* @src: input string
* @dest: destination to be copied to
* @n: number of characters to be copied
*
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (*(src + count) != '\0' && count < n)
	{
		dest[count] = *(src + count);
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
