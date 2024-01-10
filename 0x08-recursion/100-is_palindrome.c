#include "main.h"

/**
 * _strlen - calcluate the length of a string
 * @s: pointer to string
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int len = 0;

	if(*s)
	{
		len++;
		len += _strlen(s + 1);
	}

	return (len);
}

/**
 * is_palindrome_helper - helper function to check if
 * a string is a palindrome
 * @s: pointer to string
 * @start: start
 * @end: end
 *
 * Return: return 1 if the string is a palindrome
 * 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return is_palindrome_helper(s, start + 1, end - 1);
}
/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if a string is a palindrome,
 * otherwise 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	return is_palindrome_helper(s, 0, len - 1);
}
