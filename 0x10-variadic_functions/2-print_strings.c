#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @seperator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: varargs
 *
 * Return: nothing
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (seperator != NULL && i != n - 1)
			printf("%s", seperator);
	}
	va_end(args);
	putchar('\n');
}
