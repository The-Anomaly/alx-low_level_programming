#include "variadic_functions.h"
#include <stdio.h>

/**
* sum_them_all - sum all input arguments
* @n: number of arguments
* Return: sum of arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, unsigned int);
	va_end(list);

	return (sum);
}
