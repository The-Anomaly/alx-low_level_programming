#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print numbers up to 98
* @n: input parameter (start number)
*
*/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d\n", 98);
}
