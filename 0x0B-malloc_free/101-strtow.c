#include "main.h"

/**
 * free_array - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void free_array(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **newstr;
	unsigned int c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	newstr = malloc((height + 1) * sizeof(char *));
	if (newstr == NULL || height == 0)
	{
		free(newstr);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				newstr[i] = malloc((c - k + 2) * sizeof(char));
				if (newstr[i] == NULL)
				{
					free_array(newstr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			newstr[i][j] = str[k];
		newstr[i][j] = '\0';
	}
	newstr[i] = NULL;
	return (newstr);
}
