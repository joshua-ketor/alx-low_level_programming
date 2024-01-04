#include "main.h"

#define ROT13 13

/**
 * rot13 - encode a string using rot13
 * @s: pointer to string
 *
 * Return: pointer to result string s
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			s[i] += ROT13;
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			s[i] -= ROT13;
	}

	return (s);
}
