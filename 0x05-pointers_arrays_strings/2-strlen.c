#include "main.h"

/**
* _strlen - finds the lenght of a string;
* @s: input string
*
* Return: length of the string
*/
int _strlen(char *s)
{
	char val;
	int count = 0;

	while (val != '\0')
	{
		val = *(s + count);
		count++;
	}
	return (count - 1);
}
