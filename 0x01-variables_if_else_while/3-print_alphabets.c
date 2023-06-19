#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 (Passed)
 */
int main(void)
{
	char a = 'a';

	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
