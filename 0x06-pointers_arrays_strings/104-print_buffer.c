#include "main.h"
#include <stdio.h>

/**
* print_buffer - print buffer
* @b: input buffer
* @size: buffer size
*/
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);

			for (j = i; j < i + 10; j++)
			{
				if (j < size)
					printf("%02x", b[j]);
				else
					printf("  ");
				if ((j + 1) % 2 == 0)
					printf(" ");
			}

			for (k = i; k < i + 10; k++)
			{
				if (k < size)
				{
					if (b[k] >= 0 && b[k] <= 31)
						printf("%c", '.');
					else
						printf("%c", b[k]);
				}
			}
		printf("\n");
		}
	}
}
