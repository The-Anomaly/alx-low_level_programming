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
	int i = 0, j = 0, k = 0, l = 0, len = 0;
	char *cat;

	if (s1 != NULL)
		while (s1[i] != '\0')
		{
			i++;
		}

	if (s2 != NULL)
		while (s2[j] != '\0')
		{
			j++;
		}

	if (i > 0 && j > 0)
		len = i + j - 1;
	else
		len = i + j;

	cat = malloc(sizeof(char) * len);

	if (cat == NULL)
		return (NULL);

	for (k = 0; k < i + j; k++)
	{
		if (k < i && s1 != NULL)
		{
			cat[k] = s1[k];
		}
		else if (s2 != NULL)
		{
			cat[k] = s2[l];
			l++;
		}
	}
	return (cat);
}
