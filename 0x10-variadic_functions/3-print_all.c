#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>


/**
* print_int - print integer
* @num: number
*/
void print_int(int num)
{
	printf("%d", num);
}

/**
* print_char - print char
* @c: integer value of char
*/
void print_char(int c)
{
	printf("%c", c);
}

/**
* print_float - print float
* @num: double
*
*/
void print_float(double num)
{
	printf("%f", num);
}

/**
* print_string - print string
* @s: input string
*/
void print_string(char *s)
{
	if (s == NULL)
		printf("%s", "(nil)");
	else
		printf("%s", s);
}

/**
* print_all - print all arguments
* @format: argument format
*
*/
void print_all(const char * const format, ...)
{
	char *type = "cifs";
	va_list list;
	int i = 0, j = 0, sep = 0;

	va_start(list, format);

	while (format && format[i] != '\0')
	{
		j = 0;
		while (type[j] != '\0')
		{
			if (format[i] == type[j] && sep)
				printf(", ");
			j++;
		}

		switch (format[i])
		{
			case 'c':
				print_char(va_arg(list, int));
				sep = 1;
				break;
			case 'i':
				print_int(va_arg(list, int));
				sep = 1;
				break;
			case 'f':
				print_float(va_arg(list, double));
				sep = 1;
				break;
			case 's':
				print_string(va_arg(list, char *));
				sep = 1;
				break;
		}
		i++;
	}
	printf("\n");
}
