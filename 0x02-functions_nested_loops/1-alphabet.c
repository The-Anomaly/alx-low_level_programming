#include "main.h"

/**
* print_alphabets - print alphabets
*
*
*/
void print_alphabets(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar(10);
}
