#include <stdio.h>
#include <stdlib.h>

/**
* check_num - check if a string contains only digits
* @num: input string
*
*/
void check_num(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < 48 || num[i] > 57)
		{
			printf("Error\n");
			exit(98);
		}
	}
}

/**
* main - multiplies 2 positive numbers
* @argc: number of input arguments
* @argv: array of inout arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	unsigned long res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	check_num(argv[1]);
	check_num(argv[2]);

	res = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", res);
	return (0);
}
