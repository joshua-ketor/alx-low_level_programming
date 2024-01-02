#include "main.h"

int _strlen(char *s);
/**
 * print_rev - print a string, in reverse, followed by a new line
 * @s: pointer to string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 * _strlen - return length of string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len, i;

	for (i = len = 0; s[i] != '\0'; i++)
		++len;
	return (len);
}
