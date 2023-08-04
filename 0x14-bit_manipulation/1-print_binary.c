#include "main.h"

/**
 * print_binary - otputs binary equivalent of  dec num
 * @n: printing of number to binary
 */

void print_binary(unsigned long int n)
{
	int babe, asola = 0;
	unsigned long int current;

	for (babe = 63; babe >= 0; babe--)
	{
		current = n >> babe;

		if (current & 1)
		{
			_putchar('1');
			asola++;
		}
		else if (asola)
			_putchar('0');
	}
	if (!asola)
		_putchar('0');
}
