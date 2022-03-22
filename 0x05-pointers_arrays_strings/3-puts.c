#include "main.h"

/**
* _puts - print a string to the stdout
* @str: input string
* Return: nothing
*/
void _puts(char *str)
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
		_putchar(*(str + i));
	}
	_putchar('\n');
}
