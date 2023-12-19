#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed
 * by a new line
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int c;

	for (c = 0x61; c < 0x7B; c++)
		_putchar(c);
	_putchar(0x0A);
}
