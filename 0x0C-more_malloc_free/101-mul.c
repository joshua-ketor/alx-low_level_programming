#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a number
 * @str: the string to check
 *
 * Return: 1 if the string is a number, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: the command-line arguments
 *
 * Return: 0 if successful, 98 otherwise
 */
int main(int argc, char **argv)
{
	int num1, num2, product;

	/* Check if the number of arguments is correct */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/* Check if both arguments are numbers */
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	/* Convert the arguments to integers and multiply them */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	/* Print the product */
	printf("%d\n", product);

	return (0);
}
