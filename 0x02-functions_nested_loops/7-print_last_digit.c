#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ldigit;

	if (n < 0)
		n = -n;
	ldigit = n % 10;

	_putchar(48 + ldigit);
	return (ldigit);
}
