#include <stdio.h>

/**
* main - print first 98 fibonacci numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long int i = 0, j = 1, k = 2, old = 0;

	for (i = 0; i < 98; i++)
	{
		printf("%lu", j);
		if (i != 97)
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
