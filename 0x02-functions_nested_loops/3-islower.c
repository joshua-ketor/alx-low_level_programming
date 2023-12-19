#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if c is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	if (c > 0x60 && c < 0x7B)
		return (1);
	else
		return (0);
}
