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
	int i = 0;

	while (s[i])
	{
		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			{
				s[i] += ROT13;
				break;
			}

			s[i] -= ROT13;
			break;
		}
		i++;
	}

	return (s);
}
