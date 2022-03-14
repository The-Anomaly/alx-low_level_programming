#include <stdio.h>

/**
* main - print lowercase and uppercase alphabets
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 97;
	int n = 65;

	while (i <= 123 && n < 91)
	{
		putchar(i);
		i++;
		if (i == 123)
		{
			while (n < 91)
			{
				putchar(n);
				n++;
			}
		}
	}
	putchar(10);
	return (0);
}
