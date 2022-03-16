#include "main.h"

/**
* jack_bauer - print every minute in 24 hours
*
*/
void jack_bauer(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
		}
	}
}
