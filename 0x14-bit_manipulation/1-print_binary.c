#include "main.h"

/**
 * print_binary_helper - actual print_binary function
 * @n: number to print
 *
 * Return: Nothing
 */
void print_binary_helper(unsigned long int n)
{
	if (n == 0)
		return;

	print_binary_helper(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
 * print_binary - print the binary representation of a number
 * @n: number to print
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	print_binary_helper(n);
}
