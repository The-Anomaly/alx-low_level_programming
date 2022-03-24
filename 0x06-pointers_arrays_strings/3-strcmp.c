#include "main.h"

/**
* _strcmp - compare 2 strings
* @s1: first string
* @s2: second string
* Return: integer
*/
int _strcmp(char *s1, char *s2)
{
	int val = 0, k = 0;

	while (val == 0)
	{
		if (s1[k] == '\0' && s2[k] == '\0')
			break;
		val = s1[k] - s2[k];
		k++;
	}
	return (val);
}
