#include "main.h"

/**
* print_number - print integers
* @n: input integer
*
*/
void print_number(int n)
{
	if (n > 999 && n <= 9999)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar((((n % 1000) % 100) / 10) + '0');
		_putchar((((n % 1000) % 100) % 10) + '0');
	}
	else if (n > 99)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
	else if (n > 9)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 0)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar('-');
		_putchar((n * -1) / 10 + '0');
		_putchar((n * -1) % 10 + '0');
	}
}
