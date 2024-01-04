#include "main.h"

int _strlen(char *s);

/**
 * infinite_add - adds two numbers
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: pointer to result r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry;

	carry = 0;
	int i = _strlen(n1);
	int j = _strlen(n2);

	if (size_r <= (i > j ? i: j) + 1)
		return (0);

	r[size_r - 1] = '\0';
	k = size_r - 2;

	for (--i, --j; i >= 0 && j >= 0; --i, --j, --k)
	{
		r[k] = (n1[i] - '0' + n2[j] - '0' + carry) % 10 + '0';
		carry = (n1[i] - '0' + n2[j] - '0' + carry) / 10;
	}

	while (i >= 0)
	{
		if (k < 0)
			return (0);
		r[k] = (n1[i] - '0' + carry) % 10 + '0';
		carry = (n1[i--] - '0' + carry) / 10;
		--k;
	}

	while (j >= 0)
	{
		 if (k < 0)
			 return (0);
		 r[k] = (n2[j] - '0' + carry) % 10 + '0';
		 carry = (n2[j--] - '0' + carry) / 10;
		 --k;
	}

	if (carry)
	{
		if (k < 0)
			return (0);
		r[k--] = carry + '0';
	}

	return (&r[k + 1]);
}

/**
 * strlen - get string length
 * @s: pointer to string
 *
 * Return: length of string
 */
int strlen(char *s)
{
	int i, len = 0;

	while(s[i])
	{
		len++;
		i++;
	}

	return (len);
}
