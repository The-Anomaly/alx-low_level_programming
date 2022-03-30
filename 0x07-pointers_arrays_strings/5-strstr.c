#include "main.h"
#include <stdio.h>

/**
* _strstr - locate a substring in a string
* @haystack: string
* @needle: substring
*
* Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
