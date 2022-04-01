#include "main.h"
#include <stdio.h>

/**
* main - main function to print all arguments
* @argc: number of arguments
* @argv: pointer to an array of arguments
*
* Return: Always success (0)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
