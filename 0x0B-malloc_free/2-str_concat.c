#include "main.h"

/**
 * _strlen - calculate string length
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
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to concatenated string, else NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, len;

	len = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		;
	else
		len += _strlen(s1);
	if (s2 == NULL)
		;
	else
		len += _strlen(s2);

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		str[i] = s1[i];
	for (j = 0; j < _strlen(s2); j++)
		str[i + j] = s2[j];
	str[len] = '\0';

	return (str);
}
