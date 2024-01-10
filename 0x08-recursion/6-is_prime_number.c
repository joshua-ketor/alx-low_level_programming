#include "main.h"

int factor(int n, int i);

/**
 * is_prime_number - checks for a prime number
 * @n: number to check
 *
 * Return: 1 if input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
		return (0);
	if (factor(n, 2))
		return (0);
	else
		return (1);
}

/**
 * factor - checks if n has more than 2 factors
 * @n: integer to check
 * @i: integer to check divisibility
 *
 * Return: 1 if there are more than 2 factors,
 * otherwise 0 (prime number)
 */
int factor(int n, int i)
{
	if (i * i > n)
		return (0);
	if (n % i == 0)
		return (1);
	return (factor(n, i + 1));
}
