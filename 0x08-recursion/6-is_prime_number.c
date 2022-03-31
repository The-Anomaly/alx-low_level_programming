#include "main.h"

int is_prime(int n, int i);

/**
* is_prime_number - main prime function
* @n: number to be checked
* Return: integer
*/
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
* is_prime - check if input is a prime
* @n: number to be checked
* @i: divisor
* Return: 1 if input is prime, 0 otherwise
*/
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_prime(n, i + 1));
}
