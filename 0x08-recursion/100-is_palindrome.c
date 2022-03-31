#include "main.h"

int compare(char *s, int len);
int _strlen(char *s);

/**
* _strlen - find length of a string
* @s: input string
* Return: length of s
*/
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(++s));
}

/**
* compare - compare adjacent alphabets of a string
* @s: input string
* @len: length of the string;
*
* Return: 1 if string is a palindrome, 0 otherwise
*/
int compare(char *s, int len)
{
	if (len < 1)
		return (1);
	if (*s == *(s + len))
		return (compare(s + 1, len - 2));
	return (0);
}

/**
* is_palindrome - check a string for palindrome
* @s: input string
* Return: 1 if string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int len =  _strlen(s);

	return (compare(s, len - 1));
}
