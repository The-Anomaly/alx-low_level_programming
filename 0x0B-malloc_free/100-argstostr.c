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
	int j, k, l;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(sizeof(char) * (ac + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	j = 1;
	l = 0;

	while (av[j])
	{
		k = 0;
		if (av[j] == NULL)
			return (NULL);
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
