#include "main.h"

/**
* times_table - print the times table
*
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((j * i) / 10 > 0)
				_putchar((j * i) / 10 + '0');
			else if (j != 0)
				_putchar(' ');
			_putchar((j * i) % 10 + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
