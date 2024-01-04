#include "main.h"

void to_upper(char *);

/**
 * cap_string - capitalize all words of a string.
 * @s: pointer to string
 *
 * Return: pointer to resultant string s
 */
char *cap_string(char *s)
{
	int i, j, ws;
	char sep[] = " \t\n,;.!?\"(){}";

	ws = 1;
	/* loop through string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* check for separator */
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				ws = 1;
				break;
			}
		}

		/* if the current character is not a separator */
		if (sep[j] == '\0')
		{
			if (ws && s[i] >= 'a' && s[i] <= 'z')
				to_upper(&s[i]);
			ws = 0;
		}
	}
	return (s);
}

/**
 * to_upper - Convert character to uppercase
 * @c: pointer to character
 *
 * Return: Nothing
 */
void to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
