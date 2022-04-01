#include "main.h"
#include <stdio.h>

/**
* main - main function to print number of arguments
* @argc: number of arguments
* @argv: pointer to an array of arguments
*
* Return: Always success (0)
*/
int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
