#include "main.h"

/**
* reverse_array - reverse an array
* @a: input array
* @n: array length
*/
void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}
