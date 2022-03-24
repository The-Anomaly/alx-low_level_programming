#include "main.h"

/**
* leet - encodes a string into 1337
* @s: input string
* Return: string in 1330 code
*/
char *leet(char *s)
{
	int nm[] = {4, 3, 0, 7, 1};
	char ch[] = {'a', 'e', 'o', 't', 'l'};
	int count = 0, i;

	while (s[count] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[count] == ch[i] || s[count] == (ch[i] - 32))
				s[count] = nm[i] + '0';
		}
	count++;
	}
	return (s);
}
