#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: pointer to string
 *
 * Return: 0 (success), `NULL` (otherwise)
 */
char *_strdup(char *str)
{
	char *cpystr;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	cpystr = malloc(len + sizeof(char));
	if (cpystr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		cpystr[i] = str[i];

	cpystr[len] = '\0';
	return (cpystr);
}
