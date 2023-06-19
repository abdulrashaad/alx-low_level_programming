#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 passed
 */
int main(void)
{
	char r = 'a';

	while (r <= 'z')
	{
		if (r != 'e' && r != 'q')
		{
			putchar(r);
		}
		r++;
	}

	putchar('\n');
	return (0);
}
