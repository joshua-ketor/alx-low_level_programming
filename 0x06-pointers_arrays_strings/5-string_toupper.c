#include "main.h"

#define LOWER 32

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to string
 *
 * Return: pointer to result string c
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= LOWER;
		i++;
	}

	return (s);
}
