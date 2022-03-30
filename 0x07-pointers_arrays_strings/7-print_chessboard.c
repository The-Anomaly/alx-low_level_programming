#include "main.h"

/**
* print_chessboard - print chessboard
* @a: length of array
*
*/
void print_chessboard(char (*a)[8])
{
	long unsigned int i = 0, j = 0;

	while (i < sizeof(a))
	{
		for (j = 0; j < 8; j++)
			_putchar(*(*(a + i) + j));
		_putchar(10);
		i++;
	}
}
