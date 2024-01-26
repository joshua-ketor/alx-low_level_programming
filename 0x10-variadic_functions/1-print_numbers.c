#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers, followed by a new line
 * @seperator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (seperator != NULL)
			if (i != n - 1)
				printf("%s", seperator);
	}
	va_end(arg);
	putchar('\n');
}
