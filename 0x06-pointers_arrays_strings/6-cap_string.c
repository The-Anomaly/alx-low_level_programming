#include "main.h"

/**
* cap_string - capitalize every first letter in a string
* @s: input string
* Return: string
*/
char *cap_string(char *s)
{
	int count = 0, i;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int n = 13;

	while (s[count] != '\0')
	{
		if (s[count] >= 97 && s[count] <= 122)
		{
			for (i = 0; i < n; i++)
			{
				if (s[count - 1] == sep[i])
					s[count] = s[count] - 32;
			}
		}
		count++;
	}
	return (s);
}
