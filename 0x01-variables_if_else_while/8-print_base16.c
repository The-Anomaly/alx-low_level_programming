#include <stdio.h>

/**
* main - print base 16 numbers in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;
	int n = 97;

	while (i <= 58 && n < 103)
	{
		putchar(i);
		i++;
		if (i == 58)
		{
			while (n < 103)
			{
				putchar(n);
				n++;
			}
		}
	}
	putchar(10);
	return (0);
}
