#include "3-calc.h"

/**
 * main - Entry program
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int (*optr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(1);
	}

	optr = get_op_func(argv[2]);

	if (!optr)
	{
		printf("Error\n");
		exit(2);
	}

	printf("%d\n", optr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
