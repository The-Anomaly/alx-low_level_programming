#include <stdio.h>

/**
* main - print single digits
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar(10);
	return (0);
}
