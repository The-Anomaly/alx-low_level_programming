#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: pointer to an array of integers
* @size: size of the array
* @cmp: pointer to a function used to compare values
*
* Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !cmp || !array)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
