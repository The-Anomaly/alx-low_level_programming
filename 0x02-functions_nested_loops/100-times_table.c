#include "main.h"

/**
* print_times_table - print the times table
* of a given number
* @n: input integer
*/
void print_times_table(int n)
{
	int i, j, product;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = j * i;

				if (product > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((product % 10) + '0');
				}
			}
			_putchar(10);
		}
	}
}
