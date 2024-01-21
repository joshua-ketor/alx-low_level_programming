#include "main.h"

/**
 * _strlen - lenght of string
 * @s: pointer to string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strdup - return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to string
 *
 * Return: pointer to newly allocated space in memory,
 * else return NULL
 */
char *_strdup(char *str)
{
	unsigned int size, i;
	char *nstr;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	nstr = malloc((size + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		nstr[i] = str[i];

	nstr[size] = '\0';
	return (nstr);
}
