#include "main.h"

/**
* print_alphabet_x10 - print alphabets
* 10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar(10);
		i++;
	}
}
