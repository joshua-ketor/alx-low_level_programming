#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0x30; i < 0x3A; i++)
	{
		putchar(i);
		if (!(i == 0x39))
		{
			putchar(0x2C);
			putchar(0x20);
		}
	}
	putchar(0x0A);
	return (0);
}
