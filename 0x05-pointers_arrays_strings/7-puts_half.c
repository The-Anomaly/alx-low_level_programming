#include "main.h"

/**
* puts_half - prints half a string to the stdout
* @str: input string
* Return: nothing
*/
void puts_half(char *str)
{
	int count = 0, lim, i;

	while (*(str + count) != '\0')
	{
		count++;
	}

	lim = (count - 1) / 2;

	for (i = lim + 1; i < count; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
