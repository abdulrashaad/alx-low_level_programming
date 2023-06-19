#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 passed
 */

int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	a = 'a';

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
