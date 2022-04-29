#include "main.h"
#include <stdlib.h>

/**
* _pow - raise number to a given power
* @n: input number
* @p: input power
*
* Return: n raised to the power of p
*/
unsigned int _pow(unsigned int n, unsigned int p)
{
	unsigned int res = 1, i = 0;

	for (; i < p; i++)
		res *= n;
	return (res);
}

/**
* binary_to_uint - convery binary to decimal
* @b: input binary string
* Return: decimal integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i = 0, j;
	int k = 0, l = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;

	for (k = i - 1; k >= 0; k--)
	{
		if (b[k] == '0')
			j = 0;
		else if (b[k] == '1')
			j = 1;
		else
			return (0);
		res = res + (j * _pow(2, l));
		l++;
	}
	return (res);
}


/**
* set_bit_zero - set bit at given to 1 index when input n is zero
* @index: input index
*
* Return: binary string
*/
char *set_bit_zero(unsigned int index)
{
	char *newstr;
	unsigned int m = 0, i = 0;

	newstr = malloc(sizeof(char) * index + 1);
	if (newstr == NULL)
		return (NULL);

	for (m = 0; m <= index; m++)
	{
		if (m == 0)
			newstr[m] = '1';
		else
			newstr[m] = '0';
		i--;
	}
	return (newstr);
}


/**
* set_bit_nonzero - set bit at given index to 1
* when input n is greater than zero
* @n: input number
* @index: input index
*
* Return: binary string
*/
char *set_bit_nonzero(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0, j = 0, k = *n, l = *n, m = 0;
	char *str, *newstr;

	if (index > 8)
		return (NULL);

	while (k > 0)
	{
		j++;
		k /= 2;
	}

	str = malloc(sizeof(char) * j - 1);
	if (str == NULL)
		return (NULL);
	newstr = malloc(sizeof(char) * j - 1);
	if (newstr == NULL)
		return (NULL);

	while (l > 0)
	{
		if (i == index)
			str[i] = '1';
		else
			str[i] = l % 2 + '0';
		i++;
		l /= 2;
	}

	i--;
	for (m = 0; m < j; m++)
	{
		newstr[m] = str[i];
		i--;
	}
	return (newstr);
}


/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: input number
* @index: input index
*
* Return: 1 if successful, -1 otherwise
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	char *newstr;

	if (*n == 0 && index > 0)
		newstr = set_bit_zero(index);
	else
		newstr = set_bit_nonzero(n, index);

	if (newstr)
	{
		*n = binary_to_uint(newstr);
		return (1);
	}
	return (-1);
}
