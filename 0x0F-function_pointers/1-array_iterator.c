#include "function_pointers.h"

/**
* array_iterator - executes a function given as
* a parameter on each element of an array.
* @array: given array
* @size: size of the array
* @action: pointer to the function to be executed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i++)
		action(array[i]);
}
