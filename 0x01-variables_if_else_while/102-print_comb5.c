#include<stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */

int main(void)
{
	int num1 = 0;
	int num2;

	while (num1 <= 99)
	{
		num2 = num1;
		while (num2 <= 99)
		{
			if (num2 != num1)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(' ');
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);

				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
