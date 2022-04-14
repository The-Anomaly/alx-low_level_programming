#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_strings - print strings
* @separator: separator
* @n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);
	for (; i < n; i++)
	{
		char *s = va_arg(list, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
}
