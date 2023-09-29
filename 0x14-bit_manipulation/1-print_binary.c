#include "main.h"

/**
 * print_binary - output binary equivalent
 * @n: print binary
 */

void print_binary(unsigned long int n)
{
	int c, t = 0;
	unsigned long int nt;

	for (c = 63; c >= 0; c--)
	{
		nt = n >> c;

		if (nt & 1)
		{
			_putchar('1');
			t++;
		}
		else if (t)
			_putchar('0');
	}
	if (!t)
		_putchar('0');
}

