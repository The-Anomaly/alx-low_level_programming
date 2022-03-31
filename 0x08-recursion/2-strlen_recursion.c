#include "main.h"

/**
* _strlen_recursion - find length of a string
* @s: input string;
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s++)
	{
		i = _strlen_recursion(s);
		i++;
	}
	return (i);
}
