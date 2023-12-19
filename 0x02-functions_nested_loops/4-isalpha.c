#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character
 *
 * Return: 1 is c is a letter, lowercase or uppercase
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 0x40 && c < 0x5B) || (c > 0x60 && c < 0x7A))
		return (1);
	else
		return (0);
}
