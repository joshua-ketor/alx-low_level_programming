#include "variadic_functions.h"

/**
 * sum_them_all - return the summ of all parameters
 * @n: first parameter
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(arg, n);
	i = sum = 0;
	while (i < n)
	{
		sum += va_arg(arg, unsigned int);
		i++;
	}

	va_end(arg);
	return (sum);
}
