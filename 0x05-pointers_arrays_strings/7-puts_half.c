#include "main.h"

int _strlen(char *s);

/**
 * puts_half - print 2nd half of a string, followed by a new line.
 * if number of string is odd, print from the middle.
 * @str: pointer to string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len, n, i;

	len = _strlen(str);
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - return string length
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
