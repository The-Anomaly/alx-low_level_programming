#include "main.h"

/**
* _strcpy - copy a string
* @src: input string
* @dest: destination to be copied to
*
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count) != '\0')
	{
		dest[count] = *(src + count);
		count++;
	}
	dest[count] = '\0';
	return (src);
}
