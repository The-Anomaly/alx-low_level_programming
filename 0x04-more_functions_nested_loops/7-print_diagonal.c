#include "main.h"

/**
* print_diagonal - print diagonal line a specified number of times
* @n: input integer
*
*/
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
