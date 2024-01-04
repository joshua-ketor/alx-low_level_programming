#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: pointer to string
 *
 * Return: pointer to result string
 */
char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";
	char *numbers = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j / 2];
			}
		}
	}

	return (s);
}
