#include <stdio.h>

/**
 * main - Point of entry
 * Return: return 0 passed
 */

int main(void)
{
	char r = 'z';

	while (r >= 'a')
	{
		putchar(r);
		r--;
	}
	putchar('\n');
	return (0);
}
