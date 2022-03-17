#include "main.h"

/**
* print_number - print integers
* @n: input integer
*
*/
void print_number(int n)
{
	unsigned int m, count = 1;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	while (m > 9)
	{
		m /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((n / count) % 10) + '0');
	}
}
