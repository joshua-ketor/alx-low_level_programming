#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be scanned.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, word_count = 0;

	for (i = 0; str[i]; i++)
		if ((str[i] != ' ' && str[i + 1] == ' ') ||
				(str[i] != ' ' && str[i + 1] == '\0'))
			word_count++;

	return (word_count);
}

/**
 * allocate_words - Allocates memory for each word in the string.
 * @word_count: The number of words in the string.
 *
 * Return: A pointer to the allocated memory.
 */
char **allocate_words(int word_count)
{
	char **words = malloc((word_count + 1) * sizeof(char *));

	return (words);
}

/**
 * copy_words - Copies each word in the string to be allocated memory.
 * @words: The allocated memory.
 * @str: The string to be scanned.
 * @word_count: The number of words in the string.
 *
 * Return: Nothing
 */
void copy_words(char **words, char *str, int word_count)
{
	int i, j, k = 0, l, word_len;

	for (i = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;

		word_len = 0;
		while (str[k + word_len] != ' ' && str[k + word_len] != '\0')
			word_len++;

		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			while (i >= 0)
				free(words[i--]);
			free(words);
			return;
		}

		for (j = 0, l = k; j < word_len; j++, l++)
			words[i][j] = str[l];
		words[i][j] = '\0';

		k += word_len;
	}

	words[i] = NULL;
}

/**
 * strtow - a function that splits a string into words
 * @str: pointer to an array of string
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	int word_count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	words = allocate_words(word_count);
	if (words == NULL)
		return (NULL);

	copy_words(words, str, word_count);

	return (words);
}
