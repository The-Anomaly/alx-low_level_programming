#include "main.h"
#include <stdio.h>

/**
* _strstr - locate a substring in a string
* @haystack: string
* @needle: substring
*
* Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == needle[0])
			{
				j = 0;
				while (*needle++ == *(haystack + j) && needle[j] != '\0')
				{
					j++;
				}
				return (haystack);
			}
		}
	haystack++;
	}
	return (NULL);
}
