#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0(success)
 */
int main(void)
{
	char i;

	for (i = 0x61; i < 0x7B; i++)
		if (!(i == 0x65 || i == 0x71))
			putchar(i);
	putchar('\n');
	return (0);
}
