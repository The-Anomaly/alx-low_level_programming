#include "main.h"

int _sqrt(int n, int i);
/**
* _sqrt_recursion - find squareroot with recursion
* @n: number
*
* Return: squareroot of n
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - find squareroot with recursion
* @n: number
* @i: divisor
*
* Return: squareroot of n
*/
int _sqrt(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
