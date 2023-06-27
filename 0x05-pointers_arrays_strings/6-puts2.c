#include "main.h"

/**
 * puts2 - function print one character out of two
 * stating with first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int rash = 0;

	int a = 0;

	char *y = str;

	int x;

	while (*y != '\0')
	{
		y++;
		rash++;
	}
	a = rash - 1;
	for (x = 0; x <= a; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
