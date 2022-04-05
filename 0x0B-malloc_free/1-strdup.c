#include "main.h"

/**
* _strdup - duplicates a string
* @str: n=input string
* Return: pointer to the duplicated string
*/
char *_strdup(char *str)
{
	char *dup;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	dup = malloc(sizeof(char) * i + 1);

	if (dup == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		dup[j] = str[j];
		j++;
	}

	dup[j] = '\0';
	return (dup);
}
