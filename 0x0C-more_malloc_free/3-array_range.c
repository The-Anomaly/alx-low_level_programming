#include "main.h"

/**
* array_range - create an array of integers
* @min: minimum array value
* @max: maximum array value
*
* Return: pointer to the new array
*/

int *array_range(int min, int max)
{
	int *a, i = 0, j = min;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		a[i] = j++;

	return (a);
}
