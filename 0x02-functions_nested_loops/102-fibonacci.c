#include "main.h"
#include <stdio.h>

/**
* main - prints first 50 numbers
* in the fibonacci sequence starting from 1 and 2
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int i = 0, j = 1, k = 2, old = 0;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", j);
		if (i != 49)
		{
			printf(", ");
		}
		old = j;
		j = k;
		k = k + old;
	}
	printf("\n");
	return (0);
}
