#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 passed
 */

int main(void)
{
	int a;

	putchar('0');
	putchar('1');

	a = 1;

	while (a <= 89)
	{
		putchar(',');
		putchar(' ');
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
