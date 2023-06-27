#include "main.h"
/**
 * print_rev - function that prints string, in reverse, followed by a new line
 * @s: represents string
 * return: always return 0
 */
void print_rev(char *s)
{
	int hard = 0;
	int o;

	while (*s != '\0')
	{
		hard++;
		s++;
	}
	s--;
	for (o = hard; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
}
