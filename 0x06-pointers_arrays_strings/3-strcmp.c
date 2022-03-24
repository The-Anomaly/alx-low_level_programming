#include "main.h"

/**
* _strcmp - compare 2 strings
* @s1: first string
* @s2: second string
* Return: integer
*/
int _strcmp(char *s1, char *s2)
{
	int val, i = 0, j = 0, k;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
		val = -1;
	else if (i > j)
		val = 1;
	else
	{
		for (k = 0; k < i; k++)
		{
			if (s2[k] != s1[k])
			{
				if (s1[k] < s2[k])
					val = -s1[k];
				else
					val = s1[k];
				break;
			}
			else
				val = 0;
		}
	}
	return (val);
}
