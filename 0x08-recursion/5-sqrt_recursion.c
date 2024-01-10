#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt(n, 1));
}

/**
 * _sqrt - return sqrt of a num
 * @n: num
 * @i: sqrt
 *
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
