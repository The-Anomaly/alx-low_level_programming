#include <stdio.h>

/**
* main - prints sum of natural numbers
* that are multiples of 3 and 5 below and exceeding 1024
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
