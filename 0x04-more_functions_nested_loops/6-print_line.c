#include "main.h"

/**
* print_line - print a straight line using '_'
* a specified number of times
* @n: input integer
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
