#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - main function to multiply arguments
* @argc: number of arguments
* @argv: pointer to an array of arguments
*
* Return: Always success (0)
*/
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
