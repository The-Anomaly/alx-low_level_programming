#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search for a string
 * @s: pointer to char to search through
 * @accept: pointer to char to search with
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
