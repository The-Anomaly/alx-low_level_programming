#include "main.h"

/**
* swap_int - swap the values of two integers
* @a: first input integer
* @b: second input integer
*
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
