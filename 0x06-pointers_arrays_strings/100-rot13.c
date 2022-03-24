#include "main.h"

/**
* rot13 - encode a string using rot13
* @s: input string
*
* Return: pointer to input (dest)
*/
char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int count = 0, i;

	while (s[count] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == alpha[i])
			{
				s[count] = rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
