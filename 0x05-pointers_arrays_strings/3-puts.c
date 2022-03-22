#include "main.h"

/**
* _puts - print a string to the stdout
* @str: input string
* Return: nothing
*/
void _puts(char *str)
{
	char val;
	int count = 0;

	while (val != '\0')
	{
		val = *(str + count);
		_putchar(val);
		count++;
	}
	_putchar('\n');
}
