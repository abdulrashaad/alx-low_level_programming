#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 passed
 */

int main(void)
{
	int a, b;

	a = 0;

	while (a <= 8)

	{
		b = a + 1;

		while (b <= 9)
		{

		if (a > 0 || b > 1)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(a + '0');
		putchar(b + '0');
		b++;
	}
		a++;
	}
	putchar('\n');
	return (0);
}
