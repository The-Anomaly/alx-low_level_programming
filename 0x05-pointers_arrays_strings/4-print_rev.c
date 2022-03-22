#include "main.h"

/**
* print_rev - print a string in reverse to the stdout
* @s: input string
* Return: nothing
*/
void print_rev(char *s)
{
	char val;
	int count = 0, lim, i;

	while (val != '\0')
	{
		val = *(s + count);
		count++;
	}

	lim = count;

	for (i = lim - 2; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
