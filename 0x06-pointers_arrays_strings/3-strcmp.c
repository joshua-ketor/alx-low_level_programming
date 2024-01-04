#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		result = s1[i] - s2[i];

		if (result != 0)
			break;
	}
	return (result);
}
