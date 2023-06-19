#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 passed
 */

int main(void)
{
	putchar('0');
	putchar('1');

	for (int a = 1; a <= 89; a++)
	{
		putchar(',');
		putchar(' ');
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');
	}
	putchar('\n');
	return (0);
}
