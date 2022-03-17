#include "main.h"

/**
* print_triangle - print triangle of '#'
* of a given width
* @size: input integer
*
*/
void print_triangle(int size)
{
	int i, j, k, l;

	if (size == 0)
		_putchar('\n');
	for (i = size; i >= 1; --i)
	{
		j = size - i + 1;
		k = 0;
		l = 0;

		while (k < i - 1)
		{
			_putchar(' ');
			k++;
		}
		while (l < j)
		{
			_putchar('#');
			l++;
		}
		_putchar('\n');
	}
}
