#include "main.h"

/**
* str_concat - concatenate two strings
* @s1: first pointer to a char
* @s2: second pointer to a char
*
* Return: pointer to a char
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l = 0;
	char *cat;

	while (s1[i] != '\0' && s1 != NULL)
	{
		i++;
	}

	while (s2[j] != '\0' && s2 != NULL)
	{
		j++;
	}

	cat = malloc(sizeof(char) * (i + j));

	if (cat == NULL)
		return (NULL);

	for (k = 0; k < i + j; k++)
	{
		if (k < i)
		{
			cat[k] = s1[k];
		}
		else
		{
			cat[k] = s2[l];
			l++;
		}
	}
	return (cat);
}
