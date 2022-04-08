#include "main.h"

/**
* string_nconcat - concatenate two strings
* @s1: pointer to the first string
* @s2: pointer to the second string
* @n: number of bytes in s2 to concatenate
*
* Return: pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int i = 0, num, j, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[l] != '\0')
	{
		l++;
	}

	if (n >= l)
		num = i + l;
	else
		num = i + n;
	newstr =  malloc(num + 1);

	if (newstr == NULL)
	{
		free(newstr);
		return (0);
	}

	for (j = 0; j < num; j++)
	{
		if (j < i)
			newstr[j] = s1[j];
		else if (k < n)
		{
			newstr[j] = s2[k];
			k++;
		}
	}
	newstr[num] = '\0';
	return (newstr);
}
