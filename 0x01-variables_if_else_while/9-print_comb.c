#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 passed
 */

int main(void)
{
	putchar('0');

	for (int l = 1; l <= 9; l++)
	{
		putchar(',');
		putchar(' ');
		putchar(l + '0');
	}
	putchar('\n');
	return (0);
}
