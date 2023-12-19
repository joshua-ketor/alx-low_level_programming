#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0x61; c < 0x7B; c++)
			_putchar(c);
		_putchar(0x0A);
	}
}
