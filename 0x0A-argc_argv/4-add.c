#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - main function to add positive arguments
* @argc: number of arguments
* @argv: pointer to an array of arguments
*
* Return: Always success (0)
*/
int main(int argc, char *argv[])
{
	int i, sum = 0, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
