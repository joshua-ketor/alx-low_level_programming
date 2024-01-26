#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *		c: char
 *		i: integer
 *		f: float
 *		s: char * (if the string isNULL, print (nil) instead
 *		any other char should be ignored
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *arg, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					arg = va_arg(list, char *);
					if (!arg)
						arg = "(nil)";
					printf("%s%s", sep, arg);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
