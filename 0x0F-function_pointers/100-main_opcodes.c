#include <stdio.h>
#include <stdlib.h>

/**
*
*
*/
int main(int argc, char *argv[])
{
	int i = 0, j;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	j = atoi(argv[1]);
	arr = (char *)main;

	for (; i < j; i++)
	{
		if (i == j - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
