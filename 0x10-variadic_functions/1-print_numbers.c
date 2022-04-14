#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_numbers - print numbers followed by a separator
* @separator: number separator
* @n: number of arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i < n-1)
		{
			if (separator != NULL)
				printf("%s", separator);
			printf(" ");
		}
	}
	va_end(list);
	printf("\n");
}
