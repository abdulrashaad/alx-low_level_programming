#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 (Passed)
 */
int main(void)
{
	char a = 'a';

	char b = 'A';

	if (a <= 'z')
	{
		putchar(a);
		a++;
	}

	if (b <= 'A')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
