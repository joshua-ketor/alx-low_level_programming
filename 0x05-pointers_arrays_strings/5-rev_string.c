#include "main.h"

int _strlen(char *s);

/**
 * rev_string - reverse a string
 * @s: pointer to string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int len, start, end;

	len = _strlen(s);
	start = 0;
	end = len - 1;

	while (start < end)
	{
		char temp;

		temp = s[end];
		s[end] = s[start];
		s[start] = temp;

		start++;
		end--;
	}
}

/**
 * _strlen - return length of string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, len;

	for (i = len = 0; s[i] != '\0'; i++)
		++len;
	return (len);
}
