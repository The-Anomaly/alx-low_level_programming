#include "main.h"

/**
* print_alphabet - print alphabets
*
* Return: void
*/
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar(10);
}
