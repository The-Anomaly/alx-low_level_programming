#include <stdio.h>

/**
* main - sum all even fibonacci numbers
* below 4,000,000
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int j = 1, k = 2, old = 0, sum = 0;

	while (j < 4000000)
	{
		if (j % 2 == 0)
		{
			sum = sum + j;
		}
		old = j;
		j = k;
		k = k + old;
	}
	printf("%d\n", sum);
	return (0);
}
