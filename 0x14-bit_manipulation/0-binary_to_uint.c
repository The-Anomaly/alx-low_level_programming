#include "main.h"


/**
* _pow - raise number to a given power
* @n: inout number
* @p: inout power
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
* @b: inout binary string
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
