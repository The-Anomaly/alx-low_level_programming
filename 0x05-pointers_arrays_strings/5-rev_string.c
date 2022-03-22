#include "main.h"

/**
* rev_string - reverse a string
* @s: input string
* Return: nothing
*/
void rev_string(char *s)
{
	int count = 0, i, j, k, lim;
	char newstr[100000];

	while (s[count] != '\0')
	{
		count++;
	}

	lim = count;

	for (i = lim - 1; i >= 0; i--)
	{
		newstr[j] = s[i];
		j++;
	}
	for (k = lim - 1; k >= 0; k--)
	{
		s[k] = newstr[k];
	}
}
