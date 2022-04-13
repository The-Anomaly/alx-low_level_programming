#include "3-calc.h"

/**
* main - main function
* @argc: number of arguments
* @argv: array of arguments
*
* Return: integer
*/
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
