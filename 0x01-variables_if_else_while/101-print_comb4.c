#include <stdio.h>

/**
* main - print unique number combinations
*
* Return: Always 0 (Success))
*/
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i < j && i < k && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == 55 && j == 56 && k == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
