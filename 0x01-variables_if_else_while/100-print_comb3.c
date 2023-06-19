#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 passed
 */

int main(void)
{
	int a;

	a = 1;

	while (a <= 89)

	{
		if (a > 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
