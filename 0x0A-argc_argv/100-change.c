#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - change cents
* @argc: number of arguments
* @argv: pointer to array of arguments
* Return: integer
*/
int main(int argc, char *argv[])
{
	int change[5] = {25, 10, 5, 2, 1};
	int i = 0, num = 0;

	if (argc == 2)
	{
		int cents = atoi(argv[1]);

		if (cents > 0)
		{
			for (i = 0; i < 5; i++)
			{
				while (cents > 0 && cents >= change[i])
				{
					cents -= change[i];
					num++;
				}
			}
			printf("%d\n", num);
		}
		else
		{
			printf("%d\n", 0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
