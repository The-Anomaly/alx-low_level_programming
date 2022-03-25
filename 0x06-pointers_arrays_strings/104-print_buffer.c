#include "main.h"
#include <stdio.h>

/**
* print_buffer - prinf buffer
* @b: buffer
* @size: size of the buffer
*/
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i++)
		{
			j = i;
			if (i % 10 == 0)
			{
				printf("%08x: ", i);
				while (j < (i + 10))
				{
					if (j < size)
						printf("%02x", b[j]);
					else
						printf("  ");
					if ((j + 1) % 2 == 0)
						printf(" ");
					j++;
				}
			}
			if (b[i] >= 0 && b[i] <= 31)
				printf("%c", '.');
			else
				printf("%c", b[i]);
			if ((i + 1) % 10 == 0)
				printf("\n");
		}
		printf("\n");
	}
}
