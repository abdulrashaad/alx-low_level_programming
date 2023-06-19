#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 passed
 */

int main(void)
{
	int numbers = 0;

	while (numbers < 10)

	{
		putchar(numbers + '0');

		if (numbers != 9)
		{
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}
	putchar(' ');
	return (0);
}

