#include "main.h"
#include <stdio.h>

/**
* fibonacci - prints first 50 numbers
* in the fibonacci sequence starting from 1 and 2
*/
void fibonacci(void)
{
	int i = 0, j = 1, k = 2, old = 0;

	for (i = 0; i < 50; i++)
	{
		printf("%d", j);
		if (i != 49)
		{
			printf(", ");
		}
		old = j;
		j = k;
		k = k + old;
	}
	printf("\n");
}
