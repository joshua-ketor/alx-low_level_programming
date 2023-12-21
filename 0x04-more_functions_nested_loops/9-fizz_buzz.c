#include <stdio.h>
/**
 * main - print numbers from 1 to 100, followed by a newline
 * for multiples of 5 and 3, print "FizzBuzz"
 * for multiples of 3, print "Fizz"
 * and for multiples of 5, print "Buzz"
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
			else
				printf("\n");
		}
		else
			printf("%d ", i);
	}
	return (0);
}
