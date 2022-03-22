#include "main.h"

/**
* puts2 - print every other character in a string
* to the stdout, staring with the first
* @str: input string
* Return: nothing
*/
void puts2(char *str)
{
	char val;
	int count = 0, lim, i;

	while (val != '\0')
	{
		val = *(str + count);
		count++;
	}

	lim = count;

	for (i = 0; i < lim - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
}
	_putchar('\n');
}
