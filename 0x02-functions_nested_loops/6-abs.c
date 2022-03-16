#include "main.h"

/**
* _abs - returns absolutes value of a number
* @n: input parameter
*
* Return: absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
