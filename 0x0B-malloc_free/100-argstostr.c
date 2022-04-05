#include "main.h"
#include <stdio.h>

/**
* argstostr - concatenate arguments into a string
* @ac: length of the argument array
* @av: array of arguments
*
* Return: pointer to a char
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, l, count;

	if (ac == 0 || av == NULL)
		return (NULL);

	count = 0;
	for (i = 0; av[i]; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j]; j++)
			count++;
	}

	printf("%d", count);
	str = malloc(sizeof(char) * (count + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	j = 0;
	l = 0;

	while (av[j])
	{
		k = 0;
		while (av[j][k])
		{
			str[l] = av[j][k];
			k++;
			l++;
		}
		str[l] = '\n';
		l++;
		j++;
	}
	return (str);
}
