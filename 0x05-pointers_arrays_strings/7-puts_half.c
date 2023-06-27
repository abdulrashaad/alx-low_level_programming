#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd, len, n = length_of_the_string half
 * @str: input
 * Return: half
 */

void puts_half(char *str)
{
	int x, y, rash;

	rash = 0;

	for (x = 0; str[x] != '\0'; x++)
		rash++;
	y = (rash / 2);

	if ((rash % 2) == 1)
		y = ((rash + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
