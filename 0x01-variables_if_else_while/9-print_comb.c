#include <stdio.h>

/**
* main - print single digits
* followed by a comma and space
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}
